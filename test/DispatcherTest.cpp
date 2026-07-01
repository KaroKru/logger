#include <gtest/gtest.h>
#include "Dispatcher.hpp"
#include "LogEntry.hpp"
#include "Task.hpp"

class FakeTask : public Task {
public:
    void execute(const ILogEntry& entry) override {
        wasExecuted = true;
    }

    bool wasExecuted = false;
};

TEST(DispatcherTest, checkDispatchInformation) 
{
    auto task = std::make_unique<FakeTask>();
    Dispatcher dispatcher(std::move(task));

    LogEntry entry("Oct 03 03:00:00", "server", "sshd", "login");

    dispatcher.registerInformation(entry);

    EXPECT_EQ(dispatcher.getSize(), 1);

    dispatcher.dispatchInformation();

    EXPECT_EQ(dispatcher.getSize(), 0);
}