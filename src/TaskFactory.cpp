#include "TaskFactory.hpp"
#include "Task.hpp"
#include "ShowTask.hpp"
#include <stdexcept>
#include <memory>

std::unique_ptr<Task> TaskFactory::createShowTask()
{
    return std::make_unique<ShowTask>();
}