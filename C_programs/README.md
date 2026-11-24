Programming Practice Repository

A collection of programming exercises, experiments, and implementations written while learning different programming languages.

This repository is intended for:

Maintaining programming practice in one place.
Tracking learning progress using Git and GitHub.
Practicing Data Structures and Algorithms.
Sharing code and learning resources with juniors and fellow students.
📁 Repository Structure

Organize your programs according to their programming languages.

text
Programming-Practice/
│
├── C/
│   ├── Basics/
│   ├── Arrays/
│   ├── Pointers/
│   ├── Structures/
│   └── Data-Structures/
│
├── C++/
│   ├── Basics/
│   ├── OOP/
│   └── STL/
│
├── Python/
│   ├── Basics/
│   ├── Functions/
│   └── Projects/
│
├── Java/
│   ├── Basics/
│   ├── OOP/
│   └── Collections/
│
├── README.md
└── .gitignore


You can modify this structure as you learn new concepts.

💻 Programming Languages

The repository contains programs written in:

Language	File Extension
C	.c
C++	.cpp
Python	.py
Java	.java
⚙️ Development Environment

The programs can be developed using Visual Studio Code.

Recommended tools
Tool	Purpose
Visual Studio Code	Code editor
GCC	C compiler
G++	C++ compiler
Python	Python interpreter
JDK	Java development kit
Git	Version control
GitHub	Online code repository
Recommended VS Code extensions
C/C++ – Microsoft
Python – Microsoft
Extension Pack for Java – Microsoft
Code Runner – Jun Han
🚀 How to Run Programs
1. C

Compile:

bash
gcc filename.c -o filename.exe


Run in PowerShell:

powershell
.\filename.exe

2. C++

Compile:

bash
g++ filename.cpp -o filename.exe


Run:

powershell
.\filename.exe

3. Python

Run:

bash
python filename.py

4. Java

Compile:

bash
javac Main.java


Run:

bash
java Main


Make sure the required compilers, interpreters, and JDK are installed and configured in your system PATH.

🌿 Git and GitHub Workflow

Git is used to track changes in your code, while GitHub stores and shares your repository online.

First-time repository setup

Initialize Git:

bash
git init


Add files:

bash
git add .


Create your first commit:

bash
git commit -m "Initial commit"


Connect your GitHub repository:

bash
git branch -M main
git remote add origin YOUR_REPOSITORY_URL


Push your code:

bash
git push -u origin main

For future updates

Whenever you add or modify programs:

bash
git add .
git commit -m "Add new programming exercises"
git push

Useful Git commands
Command	Purpose
git status	Check modified and untracked files
git add .	Stage changes
git commit -m "message"	Save changes locally
git push	Upload changes to GitHub
git pull	Download latest changes
git log	View commit history
git clone URL	Copy a repository to your system
🚫 Understanding .gitignore

A .gitignore file tells Git which files and folders should not be tracked or uploaded to GitHub.

Why is it important?

When you compile or run programs, your computer generates additional files.

Examples:

C/C++ generates .exe and .o files.
Java generates .class files.
Python generates .pyc files and __pycache__ folders.
VS Code creates workspace-specific configuration files.

These generated files are generally unnecessary in a source-code repository.

Recommended .gitignore

Create a file named .gitignore in the root directory.

gitignore
# Compiled files
*.exe
*.out
*.o
*.obj
*.dll
*.so
*.a
*.class

# Python generated files
*.pyc
*.pyo
__pycache__/

# Build directories
build/
dist/
bin/
obj/
target/

# Python virtual environments
venv/
.venv/
env/

# VS Code workspace files
.vscode/*
!.vscode/extensions.json

# Java build tools
.gradle/

# CMake generated files
CMakeFiles/
CMakeCache.txt
cmake_install.cmake

# Operating system files
.DS_Store
Thumbs.db
desktop.ini

# Temporary files
*.tmp
*.bak
*.swp
*~

Files you SHOULD upload
Source code (.c, .cpp, .py, .java)
Header files (.h, .hpp)
README files
.gitignore
Documentation
Necessary project configuration files
Files you generally SHOULD NOT upload
Compiled executables (.exe)
Java bytecode (.class)
Python cache files (.pyc)
Virtual environments
Temporary files
Personal configuration files
Passwords, API keys, and private credentials

Important: .gitignore only prevents new, untracked files from being added. If a file is already tracked by Git, adding it to .gitignore will not automatically remove it from version control.

📚 Learning Roadmap

Suggested topics to practice and organize in this repository:

C Programming
Basics and operators
Conditional statements
Loops
Arrays and strings
Functions
Pointers
Structures and unions
Stack and Queue
Circular Queue
Linked Lists
Trees and Graphs
C++
Basics
Functions
Object-Oriented Programming
Classes and Objects
Inheritance
Polymorphism
STL
Python
Basics and data types
Conditional statements and loops
Functions
Lists, Tuples, Sets and Dictionaries
File handling
OOP
Projects
Java
Basics
Classes and Objects
Constructors
Inheritance
Interfaces
Exception Handling
Collections Framework
🤝 For Juniors and Contributors

If you are using this repository for learning:

Clone the repository.
Explore the folders according to your learning topic.
Read the code and understand its logic.
Try writing the program yourself before referring to the solution.
Experiment with different inputs.
Identify errors and debug them.
Practice implementing the concepts independently.

Don't just copy and paste code. Understanding the logic is more important than memorizing programs.

🎯 Repository Goal

The goal of this repository is to maintain a consistent programming practice record, improve problem-solving skills, understand fundamental programming concepts, and build a strong foundation in computer science.

Learn → Practice → Debug → Improve → Share

Happy Coding! 🚀