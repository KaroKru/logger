#ifndef SAVE_TASK_HPP
#define SAVE_TASK_HPP

#include "Task.hpp"

class SaveTask : public Task
{
public:
    void execute(const ILogEntry& entry) override;
};

#endif //SAVE_TASK_HPP