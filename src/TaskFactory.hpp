#ifndef TASKFACTORY_HPP
#define TASKFACTORY_HPP

#include <memory>

class Task;

enum class TaskType
{
    Show
};

class TaskFactory
{
public:
    static std::unique_ptr<Task> create(TaskType type);
};


#endif // TASKFACTORY_HPP