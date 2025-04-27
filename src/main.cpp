#include <iostream>
#include "LogParser.hpp"
#include "FileReader.hpp"
#include "LogEntry.hpp"

void open()
{
    std::string path = "../src/log.txt";
    FileReader openFile(path);
    
    std::vector<std::string> line = openFile.readFile();

    for (const auto i : line)
    {
        LogEntry entryData = LogParser::parseLine(i);

        std::cout << "Timestamp " << entryData.getDate() << std::endl;
        std::cout << "Server name " << entryData.getServerName() << std::endl;
        std::cout << "Name " << entryData.getName() << std::endl;
        std::cout << "Messafe " << entryData.getMessage() << std::endl;
    }
}

int main()
{
    std::cout << "check message" << std::endl;
    open();

    return 0;
}