#ifndef LOGPARSER_HPP
#define LOGPARSER_HPP

#include <string>
#include <memory>

class ILogEntry;

class LogParser
{
public:
    static std::unique_ptr<ILogEntry> parseLine(const std::string& readLine);
};

#endif //LOGPARSER_HPP
