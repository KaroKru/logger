#include "LogParser.hpp"
#include <stdexcept>
#include "LogEntry.hpp"
#include <sstream>
#include <string>
#include <memory>

std::unique_ptr<LogEntryInt> LogParser::parseLine(const std::string& readLine)
{
    std::istringstream line(readLine);
    std::string month;
    std::string day;
    std::string time;
    std::string serverName;
    std::string name;
    std::string message;
    std::string timestamp;

    if (!(line >> month >> day >> time)) 
    {
        throw std::runtime_error("Invalid timestamp");
    }
    timestamp = month + " " + day + " " + time;

    if (!(line >> serverName)) 
    {
        throw std::runtime_error("Invalid server name");
    }

    if (!(line >> name)) 
    {
        throw std::runtime_error("Invalid name");
    }

    if (!name.empty() && name.back() == ':') 
    {
        name.pop_back();
    }

    std::getline(line, message);

    if (!message.empty() && message.front() == ' ') 
    {
        message.erase(0, 1);
    }

    return std::make_unique<LogEntry>(timestamp, serverName, name, message);
}