#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
private:
    std::string name;
    bool status;
    unsigned int id;

public:
    Task(const std::string &name_var);
    void setName(const std::string &name_var);
    void setStatus(bool status_var);
    std::string getName() const;
    bool getStatus() const;
    unsigned int getTaskId() const;
};

#endif // TASK_H

