#include <iostream>
#include "Task.hpp"
#include "FileReader.hpp"
#include <utility>
#include "ILogEntry.hpp"
#include "LogParser.hpp"
#include <string>
#include <vector>
#include <memory>
#include "Dispatcher.hpp"
#include "TaskFactory.hpp"
#include <limits>

namespace
{
TaskType selectTask()
{
    while (true)
    {
        std::cout << "Select task type:\n"
                  << "1. Show logs\n"
                  << "2. Save logs\n"
                  << "Select: ";

        int choice{};

        if (!(std::cin >> choice))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Invalid input, please enter a number" << std::endl;
            continue;
        }

        switch (choice)
        {
            case 1:
                return TaskType::Show;

            case 2:
                return TaskType::Save;

            default:
                std::cout << "Invalid option. Please try again.\n\n";
        }
    }
}

void open(TaskType taskType)
{
    const std::string path = "../src/log.txt";
    const FileReader openFile(path);

    auto task = TaskFactory::create(taskType);

    if (!task)
    {
        std::cerr << "Failed.\n";
        return;
    }

    Dispatcher dispatcher(std::move(task));

    const std::vector<std::string> line = openFile.readFile();

    for (const auto& iValue : line)
    {
        const std::unique_ptr<ILogEntry> entryData = LogParser::parseLine(iValue);

        if (entryData)
        {
            dispatcher.registerInformation(*entryData);
        }
    }

    dispatcher.dispatchInformation();
}
}

int main()
{
    std::cout << "check message" << std::endl;
    open(selectTask());

    return 0;
}