#include <gtest/gtest.h>
#include "LogEntry.hpp"
#include <string>

TEST(LogEntry, checkEntry)
{
    std::string timestamp = "2025-03-03 03:00:00";
    std::string serverName = "kernel1";
    std::string name = "sshd";
    std::string message = "Connection established";

    LogEntry log(timestamp, serverName, name, message);
    EXPECT_EQ(log.getDate(), timestamp);
    EXPECT_EQ(log.getServerName(), serverName);
    EXPECT_EQ(log.getName(), name);
    EXPECT_EQ(log.getMessage(), message);
}