# Task Manager using C++
A beginner-friendly C++ project to manage tasks using object-oriented programming and file handling.


🚀 What This Project Does:
This is a simple console-based task manager where you can:

✅ Add new tasks with title, due date, status, and priority.

📋 List all tasks in a readable format.

🔁 Update the status (complete/pending) of a task.

❌ Delete tasks by ID.

💾 Save and Load tasks from a file (data.txt) automatically.



# 💡 Technologies Used:

C++ STL: vector, fstream, string, sstream, algorithm

OOP Concepts: Classes, objects, constructors, methods

Modular Design: Multiple .cpp and .hpp files



# 📁 File Structure:


├── Task.hpp             # Task class definition

├── Task.cpp             # Task class implementation

├── TaskManager.hpp      # TaskManager class definition

├── TaskManager.cpp      # TaskManager class implementation

├── main.cpp             # Entry point, handles user interaction

├── data.txt             # Auto-saved task data (after exit)


# ⚙️ How to Run
Make sure you have a C++ compiler (like g++).


Compile the files:
g++ main.cpp Task.cpp TaskManager.cpp -o taskmanager

Run the app:
./taskmanager


# 📌 Notes: 

This is just a basic version — more features (searching, filtering, sorting, GUI, etc.) will be added.

The goal is to learn C++ deeply by building, not just writing code in one file.


# 🧠 What You’ll Learn by Doing This:

Object-oriented programming in C++

File read/write operations (ifstream, ofstream)

Vectors and STL features

How to design modular, maintainable C++ applications

