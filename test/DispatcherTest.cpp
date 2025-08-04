#include <gtest/gtest.h>
#include "Dispatcher.hpp"
#include "LogEntry.hpp"

TEST(DispatcherTest, checkRegisterInformation)
{
    Dispatcher dispatcher;
    LogEntry entry("Oct 03 03:00:00", "server", "sshd", "login");

    EXPECT_NO_THROW(dispatcher.registerInformation(entry));
}

TEST(DispatcherTest, checkDispatchInformation)
{
    Dispatcher dispatcher;
    LogEntry entry("Oct 03 03:00:00", "server", "sshd", "login");

    dispatcher.registerInformation(entry);
    EXPECT_NO_THROW(dispatcher.dispatchInformation(entry));
}

