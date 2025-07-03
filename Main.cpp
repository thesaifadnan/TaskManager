#include "TaskManager.hpp"
#include<iostream>
int main(){
    TaskManager manager;
    int choice;
    manager.loadFromFile("data.txt");

    while(true){
        cout << "\n1. Add Task\n2. List Tasks\n3. Update Task Status\n4. Delete Task\n5. Exit\nChoice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:{
                int id, priority;
                string title, dueDate;
                bool status;
                cin.ignore();
                cout<<"Title: "; getline(cin,title);
                cout<<"Due Date(XX-XX-XXX): "; getline(cin,dueDate);
                cout<<"Status(1/0): "; cin>>status;
                cout<<"Priority(1-3): "; cin>>priority;
                manager.addTask(title,dueDate,priority,status);
                break;
            }
            case 2:{
                manager.listTasks();
                break;
            }
            case 3:{
                int id;
                cout<<"Enter the Id of the Task you want to change the Status of : ";
                cin>>id;
                manager.updateStatus(id);
                break;
            }
            case 4:{
                int id;
                cout<<"Enter the Id of the Task you want to Remove : ";
                cin>>id;
                manager.removeTask(id);
                break;
            }
            case 5:{
                manager.saveToFile("data.txt");
                cout<<"Saving the Tasks in File and Exiting..."<<endl;
                exit(0);
            }
            default:{
                cout<<"Invalid Choice PLease Try Again!"<<endl;
                break;
            }
        }
    }
}