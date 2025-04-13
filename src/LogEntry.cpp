#include "LogEntry.hpp"

LogEntry::LogEntry(std::string date, std::string message, int value) : m_date(date), m_message(message), m_value(value)
{

}

int LogEntry::getValue()
{
    return m_value;
}

std::string LogEntry::getMessage()
{
    return m_message;
}

std::string LogEntry::getDate()
{
    return m_date;
}