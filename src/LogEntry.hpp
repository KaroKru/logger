#ifndef LOGENTRY_HPP
#define LOGENTRY_HPP

#include <iostream>
#include <string>

class LogEntry
{
    LogEntry(std::string date, std::string message, int value);
    
    ~LogEntry();

    int getValue();

    std::string getMessage();

    std::string getDate();

    private:
    std::string m_date = "";

    std::string m_message = "";

    int m_value = 0;
};

#endif 