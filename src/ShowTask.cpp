#include "ShowTask.hpp"
#include "ILogEntry.hpp"
#include <iostream>

void ShowTask::execute(const ILogEntry& entry)
{
    std::cout
        << entry.getDate() << " "
        << entry.getServerName() << " "
        << entry.getName() << " "
        << entry.getMessage() << std::endl;
}