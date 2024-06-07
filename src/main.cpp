#include<iostream>
#include "task.h"
#include "taskmanager.h"

using namespace std;

int main() {
    TaskManager taskManager;

    int choice;

    do {
        cout << "\n1. Add New Task";
        cout << "\n2. Update Existing Task";
        cout << "\n3. Delete Task";
        cout << "\n4. Display all Tasks";
        cout << "\n0. Exit";
        cout << "\n\nEnter your choice: ";
        
        if (!(cin >> choice)) {
            cout << "\nInvalid input! Please enter a number.\n";
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the input
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer to avoid issues with leftover characters.

        switch (choice) {
            case 1:
                string taskName;
                cout << "\nEnter task name: ";
                getline(cin, taskName); // Use getline to handle spaces in the input properly.
                taskManager.addTask(taskName);
                break;
            case 2:
                cout << "Updating an existing task...\n";
                taskManager.updateTask();
                break;
            case 3:
                cout << "Deleting a task...\n";
                taskManager.deleteTask();
                break;
            case 4:
                cout << "Displaying all tasks...\n";
                taskManager.displayAllTasks();
                break;
            case 0:
                cout << "\nExiting the application..\n";
                break;
            default:
                cout << "\nInvalid choice. Please enter a number from 0 to 4.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}

