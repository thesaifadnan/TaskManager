#ifndef TASKMANAGER_HPP
#define TASKMANAGER_HPP

#include<vector>
#include "Task.hpp"
class TaskManager{
    private:
        vector<Task> tasks;
        static int nextId;
    
    public:
        void addTask(string title, string dueDate, int priority, bool status);
        void listTasks();
        void removeTask(int removeId);
        void updateStatus(int id);
        void saveToFile(string filename);
        void loadFromFile(string filename);
        string toString(Task);
};

#endif