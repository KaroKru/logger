#include <iostream>
#include "FileReader.hpp"
#include "Task.hpp"
#include "ILogEntry.hpp"
#include "LogParser.hpp"
#include <string>
#include <vector>
#include <memory>
#include "Dispatcher.hpp"
#include "TaskFactory.hpp"

namespace
{
void open()
{
    const std::string path = "../src/log.txt";
    const FileReader openFile(path);
    auto task = TaskFactory::create(TaskType::Show);
    Dispatcher dispatcher(std::move(task));
    
    const std::vector<std::string> line = openFile.readFile();

    for (const auto iValue : line)
    {
        const std::unique_ptr<ILogEntry> entryData = LogParser::parseLine(iValue);

        dispatcher.registerInformation(*entryData);
        dispatcher.dispatchInformation();
    }
}
}

int main()
{
    std::cout << "check message" << std::endl;
    open();

    return 0;
}