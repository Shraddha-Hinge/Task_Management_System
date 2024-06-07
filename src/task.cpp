#include "task.h"
#include <iostream>

unsigned int task_id = 0;  // Initialize task_id

Task::Task(const std::string &name_var) : name(name_var), status(false) {
    id = task_id++;
}

void Task::setName(const std::string &name_var) {
    name = name_var;
}

void Task::setStatus(bool status_var) {
    status = status_var;
}

std::string Task::getName() const {
    return name;
}

bool Task::getStatus() const {
    return status;
}

unsigned int Task::getTaskId() const {
    return id;
}

