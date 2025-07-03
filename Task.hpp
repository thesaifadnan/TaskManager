#ifndef TASK_HPP
#define TASK_HPP

#include<string>
using namespace std;
class Task{
public:
    int id;
    string title;
    string dueDate;
    int priority;
    bool status;
    
    Task(int id,string title, string dueDate, int priority,bool status);
    void display()const;

};

#endif