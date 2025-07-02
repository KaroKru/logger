#include <iostream>
#include "FileReader.hpp"
#include "ILogEntry.hpp"
#include "LogParser.hpp"
#include <string>
#include <vector>
#include <memory>

namespace
{
void open()
{
    const std::string path = "../src/log.txt";
    const FileReader openFile(path);
    
    const std::vector<std::string> line = openFile.readFile();

    for (const auto iValue : line)
    {
        std::unique_ptr<ILogEntry> entryData = LogParser::parseLine(iValue);

        std::cout << "Timestamp " << entryData->getDate() << std::endl;
        std::cout << "Server name " << entryData->getServerName() << std::endl;
        std::cout << "Name " << entryData->getName() << std::endl;
        std::cout << "Messafe " << entryData->getMessage() << std::endl;
    }
}
}

int main()
{
    std::cout << "check message" << std::endl;
    open();

    return 0;
}