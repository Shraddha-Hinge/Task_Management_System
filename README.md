# Task Manager Project

This C++ project implements a simple task manager system that allows users to add, update, delete, and display tasks. It serves as an example of basic C++ operations, file handling, and object-oriented programming concepts.

## Table of Contents
 - Introduction
 - Components
   - Custom Classes
   - Task Operations
   - User Interface
 - Usage

## Introduction

The Task Manager is designed to help users manage their daily tasks through a command-line interface. It allows for basic operations such as adding new tasks, updating existing tasks, deleting tasks, and viewing all current tasks.

## Components
- ## Custom Classes

  - *Task:* Represents a task with a name and status.
  - *TaskManager:* Manages a collection of tasks and provides functionality to manipulate them.

- ## Task Operations

  - *addTask:* Allows adding a new task to the manager.
  - *updateTask:* Provides the ability to modify the details of an existing task.
  - *deleteTask:* Removes a task from the manager.
  - *displayAllTasks:* Displays all tasks currently managed.

- ## User Interface

  - The user interface is command-line based, providing a simple menu to interact with the task manager operations.

## Usage

To use this project, follow these steps:

1. Ensure you have a C++ compiler installed on your system (e.g., GCC).
2. Clone or download this repository.
3. Navigate to the project directory in your terminal.
4. Compile the project using the provided Makefile with the `make` command.
5. Run the executable `taskmanager.out` to start the application.
