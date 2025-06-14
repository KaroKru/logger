#include <gtest/gtest.h>
#include "LogEntry.hpp"
#include <string>

TEST(LogEntryTest, checkEntry)
{
    std::string timestamp = "Oct 03 03:00:00";
    std::string serverName = "kernel1";
    std::string name = "sshd";
    std::string message = "Connection established";

    LogEntry log(timestamp, serverName, name, message);
    EXPECT_EQ(timestamp, log.getDate());
    EXPECT_EQ(serverName, log.getServerName());
    EXPECT_EQ(name, log.getName());
    EXPECT_EQ(message, log.getMessage());
}