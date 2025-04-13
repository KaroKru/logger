#ifndef LOGPARSER_HPP
#define LOGPARSER_HPP

#include <iostream>
#include <string>

class LogParser
{
    LogParser(std::string message);

    ~LogParser();

    std::string parseLine();

    private: 

    std::string m_message = "";
};

#endif

