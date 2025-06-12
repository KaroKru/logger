#include "LogEntry.hpp"
#include <string>
#include <utility>

LogEntry::LogEntry(const std::string& date, const std::string& serverName,
    const std::string& name, const std::string& message)
: m_date(date), m_serverName(serverName), m_name(name), m_message(message) 
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