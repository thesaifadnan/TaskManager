#include "Task.hpp"
#include<iostream>

Task::Task(int id,string title, string dueDate, int priority,bool status){
    this->id = id;
    this->title = title;
    this->dueDate = dueDate;
    this->status = status;
    this->priority = priority;
}

void Task::display()const{
    cout<<"ID: "<<id<<" | "<<"Title: "<<title<<" | "<<"Status: "<<(status?"Completed":"Pending")<<" | "<<"Priority: "<<priority<<" | "<<"Due Date: "<<dueDate<<endl;
}