#include "TaskManager.hpp"
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

int TaskManager::nextId = 1001;

void TaskManager::addTask(string title, string dueDate, int priority, bool status){
    tasks.push_back({nextId,title,dueDate,priority,status});
    nextId++;
}

void TaskManager::removeTask(int removeId){
    auto it = std::remove_if(tasks.begin(), tasks.end(),
                              [removeId](const Task& t) { return t.id == removeId; });

    if (it != tasks.end()) {
        tasks.erase(it, tasks.end());
        cout << "Task Removed Successfully" << endl;
    } else {
        cout << "No Task Found with id: " << removeId << endl;
    }
}

void TaskManager::listTasks(){
    if(tasks.empty()){
        cout<<"No Tasks in Task Lists!"<<endl;
        return;
    }
    cout<<"All Tasks :"<<endl;
    for(auto &task : tasks){
        task.Task::display();
    }
}

void TaskManager::updateStatus(int id){
    bool found =false;
    for(auto &task: tasks){
        if(task.id == id){
            found = true;
            task.status = task.status?false:true;
            task.display();
            cout<<"Task Status Updated Successfully"<<endl;
            break;
        }
    }
    if(!found){
        cout<<"No Task Found with id: "<<id<<endl;
    }
}

string TaskManager::toString(Task task){
    return to_string(task.id) + "," + task.title + "," +  task.dueDate + "," +  to_string(task.priority) + "," +  to_string(task.status);
}

void TaskManager::saveToFile(string filename){
    ofstream file(filename);

    if(file.is_open()){
        for(auto task: tasks){
            file << toString(task) << '\n';
        }
        cout<<"Tasks List Saved to File : "<<filename<<endl;
    }else{
        cerr<<"Unable to Open the File : "<<filename<<endl;
    }
}

void TaskManager::loadFromFile(string filename){
    ifstream file(filename);

    if(file.is_open()){
        string task;
        while(getline(file,task)){
            stringstream ss(task);
            string idStr,title,statusStr,priorityStr,dueDate;

            getline(ss, idStr , ',');
            getline(ss, title , ',');
            getline(ss, dueDate , ',');
            getline(ss, priorityStr , ',');
            getline(ss, statusStr , ',');

            int id = stoi(idStr);
            int priority = stoi(priorityStr);
            bool status = stoi(statusStr);

            tasks.push_back({id,title,dueDate,priority,status});
            if(id>=nextId){
                nextId = id+1;
            }
        }
        cout<<"Tasks List Loaded from File : "<<filename<<endl;
    }else{
        cerr<<"Unable to Open the File : "<<filename<<endl;
    }
}