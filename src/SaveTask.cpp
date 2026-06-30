#include "SaveTask.hpp"
#include "ILogEntry.hpp"
#include <ios>
#include <fstream>
#include <stdexcept>

void SaveTask::execute(const ILogEntry& entry)
{
    std::ofstream file("TaskLog.txt", std::ios::app);

    if (!file.is_open())
    {
        throw std::runtime_error("Failed to open TaskLog.txt");
    }

    file << entry.getDate() << ' '
         << entry.getServerName() << ' '
         << entry.getName() << ' '
         << entry.getMessage() << '\n';
}