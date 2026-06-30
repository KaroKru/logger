#include <gtest/gtest.h>

#include "TaskFactory.hpp"
#include "Task.hpp"

TEST(TaskFactoryTest, testShowTask)
{
    auto task = TaskFactory::create(TaskType::Show);

    EXPECT_NE(task, nullptr);
}

TEST(TaskFactoryTest, testSaveTask)
{
    auto task = TaskFactory::create(TaskType::Save);

    EXPECT_NE(task, nullptr);
}

TEST(TaskFactoryTest, testUnknownTaskType)
{
    auto task = TaskFactory::create(static_cast<TaskType>(10U));

    EXPECT_EQ(task, nullptr);
}