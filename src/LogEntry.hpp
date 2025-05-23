#ifndef LOGENTRY_HPP
#define LOGENTRY_HPP

#include <iostream>
#include <string>

class LogEntry
{
    public:
    LogEntry(const std::string& date, const std::string& serverName, const std::string& name, const std::string& message);

    const std::string& getMessage() const;

    const std::string& getDate() const;

    const std::string& getServerName() const;

    const std::string& getName() const;

    private:
    std::string m_date;

    std::string m_message;

    std::string m_serverName;

    std::string m_name;
};

#endif //LOGENTRY_HPP