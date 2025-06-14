#ifndef LOGENTRY_HPP
#define LOGENTRY_HPP

#include <iostream>
#include <string>
#include "ILogEntry.hpp"

class LogEntry : public ILogEntry
{
    public:
    LogEntry(std::string date, std::string serverName, std::string name, std::string message);

    const std::string& getMessage() const override;

    const std::string& getDate() const override;

    const std::string& getServerName() const override;

    const std::string& getName() const override;

    private:
    std::string m_date;

    std::string m_message;

    std::string m_serverName;

    std::string m_name;
};

#endif //LOGENTRY_HPP