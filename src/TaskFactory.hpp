#ifndef TASKFACTORY_HPP
#define TASKFACTORY_HPP

#include <memory>
#include "Task.hpp"

enum class TaskType
{
    Show,
    Save
};

class TaskFactory
{
public:
    static std::unique_ptr<Task> create(TaskType type);
};


#endif // TASKFACTORY_HPP