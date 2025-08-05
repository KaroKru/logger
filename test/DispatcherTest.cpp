#include <gtest/gtest.h>
#include "Dispatcher.hpp"
#include "LogEntry.hpp"

TEST(DispatcherTest, checkDispatchInformation)
{
    Dispatcher dispatcher;
    LogEntry entry("Oct 03 03:00:00", "server", "sshd", "login");

    dispatcher.registerInformation(entry);
    dispatcher.dispatchInformation(entry);

    EXPECT_EQ(dispatcher.getSize(), 1);
}

