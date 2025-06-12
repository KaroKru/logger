#ifndef MOCKLOGGERENTRY_HPP
#define MOCKLOGGERENTRY_HPP

#include "LogEntryInt.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

class MockLoggerEntry : public LogEntryInt
{
public:
    MOCK_METHOD(const std::string&, getMessage, (), (const, override));

    MOCK_METHOD(const std::string&, getDate, (), (const, override));

    MOCK_METHOD(const std::string&, getServerName, (), (const, override));

    MOCK_METHOD(const std::string&, getName, (), (const, override));
};

#endif // MOCKLOGGERENTRY_HPP