#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <vector>
#include <memory>
#include "task.h"

class TaskManager {
private:
    std::vector<std::shared_ptr<Task>> myTasks;

public:
    void addTask();
    void displayAllTasks() const;
    void deleteTask();
    void updateTask();
};

#endif // TASKMANAGER_H

