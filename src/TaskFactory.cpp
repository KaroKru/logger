#include "TaskFactory.hpp"
#include "ShowTask.hpp"
#include "Task.hpp"
#include "SaveTask.hpp"
#include <memory>

std::unique_ptr<Task> TaskFactory::create(TaskType type) 
{
    switch (type)
    {
        case TaskType::Show:
            return std::make_unique<ShowTask>();
        case TaskType::Save:
            return std::make_unique<SaveTask>();
        default:
            return nullptr;
    }
}
