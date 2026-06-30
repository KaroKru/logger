#ifndef DELETE_TASK_HPP
#define DELETE_TASK_HPP

#include "Task.hpp"

class DeleteTask : public Task
{
public:
    void execute(const ILogEntry& entry) override;
};

#endif //DELETE_TASK_HPP