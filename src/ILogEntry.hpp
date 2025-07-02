#ifndef ILOGENTRY_HPP
#define ILOGENTRY_HPP

#include <iostream>
#include <string>

class ILogEntry
{
public:
    virtual ~ILogEntry() = default;

    virtual const std::string& getMessage() const = 0;

    virtual const std::string& getDate() const = 0;

    virtual const std::string& getServerName() const = 0;

    virtual const std::string& getName() const = 0;
};

#endif // ILOGENTRY_HPP