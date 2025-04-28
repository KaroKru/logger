#include <gtest/gtest.h>
#include "LogParser.hpp"
#include "LogEntry.hpp"
#include <string>

TEST(LogParserTest, checkIfParseNoThrow)
{
    const std::string line = "2025-03-07 05:00:00 server-name sshd: Restarted server";
    LogEntry log = LogParser::parseLine(line);

    EXPECT_EQ(log.getDate(), "2025-03-07 05:00:00");
    EXPECT_EQ(log.getServerName(), "server-name");
    EXPECT_EQ(log.getName(), "sshd");
    EXPECT_EQ(log.getMessage(), "Restarted server");
}

TEST(LogParser, checkTimestampIfMissing)
{
    const std::string line = "server-name sshd: Restarted server";
    EXPECT_THROW(LogParser::parseLine(line), std::runtime_error);
}

TEST(LogParser, checkServerNameIfMissing)
{
    const std::string line = "2025-03-07 05:00:00 sshd: Restarted server";
    EXPECT_THROW(LogParser::parseLine(line), std::runtime_error);
}

TEST(LogParser, checkNameIfMissing)
{
    const std::string line = "2025-03-07 05:00:00 server-name Restarted server";
    EXPECT_THROW(LogParser::parseLine(line), std::runtime_error);
}

TEST(LogParser, checkMessageIfMissing)
{
    const std::string line = "2025-03-07 05:00:00 server-name sshd:";
    EXPECT_THROW(LogParser::parseLine(line), std::runtime_error);
}