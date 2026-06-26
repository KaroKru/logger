#include "TaskFactory.hpp"
#include "Task.hpp"
#include "ShowTask.hpp"
#include <stdexcept>
#include <memory>

std::unique_ptr<Task> TaskFactory::create(TaskType type) 
{
    switch (type)
    {
        case TaskType::Show:
            return std::make_unique<ShowTask>();
        default:
            return nullptr;
    }
}
