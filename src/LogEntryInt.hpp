#ifndef LOGENTRYINT_HPP
#define LOGENTRYINT_HPP

#include <iostream>
#include <string>

class LogEntryInt
{
public:
    virtual ~LogEntryInt() = default;

    virtual const std::string& getMessage() const = 0;

    virtual const std::string& getDate() const = 0;

    virtual const std::string& getServerName() const = 0;

    virtual const std::string& getName() const = 0;
};

#endif // LOGENTRYINT_HP