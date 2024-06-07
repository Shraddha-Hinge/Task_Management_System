#include "taskmanager.h"
#include <iostream>
#include <algorithm>


void TaskManager::addTask() {
    std::string task_name;
    std::cout << "\nEnter task name: ";
    std::cin >> task_name;
    myTasks.push_back(std::make_shared<Task>(task_name));
}

void TaskManager::displayAllTasks() const {
    for (const auto& task : myTasks) {
        std::cout << task->getTaskId() << ", " << task->getName()
                  << (task->getStatus() ? " Completed" : " Not Completed") << std::endl;
    }
}


void TaskManager::deleteTask() {
    unsigned int id;
    std::cout << "Enter task id to delete: ";
    std::cin >> id;
    myTasks.erase(std::remove_if(myTasks.begin(), myTasks.end(),
                                 [id](const std::shared_ptr<Task>& task) {
                                     return task->getTaskId() == id;
                                 }), myTasks.end());
}


void TaskManager::updateTask() {
    unsigned int id;
    bool newStatus;
    std::cout << "Enter task id to update: ";
    std::cin >> id;
    std::cout << "Enter new status (1 for completed, 0 for not completed): ";
    std::cin >> newStatus;
    for (auto& task : myTasks) {
        if (task->getTaskId() == id) {
            task->setStatus(newStatus);
            break;
        }
    }
}

