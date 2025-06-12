#include <gtest/gtest.h>
#include "LogParser.hpp"
#include "LogEntry.hpp"
#include <string>

TEST(LogParserTest, checkIfParseNoThrow)
{
    const std::string line = "Oct 03 05:00:00 server-name sshd: Restarted server";
    std::unique_ptr<LogEntryInt> log;
    
    EXPECT_NO_THROW({log = LogParser::parseLine(line);});

    EXPECT_EQ(log.getDate(), "Oct 03 05:00:00");
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
    const std::string line = "Oct 03 05:00:00 ";
    EXPECT_THROW(LogParser::parseLine(line), std::runtime_error);
}

TEST(LogParser, checkNameIfMissing)
{
    const std::string line = "Oct 03 05:00:00 server-name";
    EXPECT_THROW(LogParser::parseLine(line), std::runtime_error);
}

TEST(LogParser, checkMessageIfMissing)
{
    const std::string line = "Oct 03 05:00:00 server-name sshd:";
    LogEntry log = LogParser::parseLine(line);
    EXPECT_EQ(log.getMessage().empty(), true);
}