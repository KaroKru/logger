#ifndef LOGPARSER_HPP
#define LOGPARSER_HPP

#include <string>
#include <memory>

class LogEntryInt;

class LogParser
{
public:
    static std::unique_ptr<LogEntryInt> parseLine(const std::string& readLine);
};

#endif //LOGPARSER_HPP
