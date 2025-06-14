#include "LogEntry.hpp"
#include <string>
#include <utility>

LogEntry::LogEntry(std::string date, std::string serverName, std::string name, std::string message)
    : m_date(std::move(date)), m_serverName(std::move(serverName)), m_name(std::move(name)), m_message(std::move(message)) 
{
    
}

const std::string& LogEntry::getMessage() const
{
    return m_message;
}

const std::string& LogEntry::getDate() const
{
    return m_date;
}

const std::string& LogEntry::getServerName() const
{
    return m_serverName;
}

const std::string& LogEntry::getName() const
{
    return m_name;
}