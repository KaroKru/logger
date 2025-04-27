#include "LogParser.hpp"


LogEntry LogParser::parseLine(const std::string& readLine)
{
    std::istringstream line(readLine);
    std::string month = "";
    std::string day = "";
    std::string time = "";
    std::string serverName = "";
    std::string name = "";
    std::string message = "";
    std::string timestamp = "";

    if (!(line >> month >> day >> time)) 
    {
        throw std::runtime_error("Invalid timestamp");
    }
    else
    {
        timestamp = month + " " + day + " " + time;
    }

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

    return LogEntry(timestamp, serverName, name, message);
}