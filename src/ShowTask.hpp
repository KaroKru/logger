#ifndef SHOWTASK_HPP
#define SHOWTASK_HPP

#include "Task.hpp"

class ShowTask : public Task
{
public:
    void execute(const ILogEntry& entry) override;
};

#endif // SHOWTASK_HPP