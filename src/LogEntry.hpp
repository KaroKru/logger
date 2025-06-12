#ifndef LOGENTRY_HPP
#define LOGENTRY_HPP

#include <iostream>
#include <string>
#include "LogEntryInt.hpp"

class LogEntry : public LogEntryInt
{
    public:
    LogEntry(const std::string& date, const std::string& serverName, const std::string& name, const std::string& message);

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