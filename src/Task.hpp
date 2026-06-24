#ifndef TASK_HPP
#define TASK_HPP

#include "ILogEntry.hpp"

class Task
{
public:
    virtual ~Task() = default;
    virtual void execute(const ILogEntry& entry) = 0;
};

#endif //TASK_HPP