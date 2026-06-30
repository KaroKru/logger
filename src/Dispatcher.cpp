#include "Dispatcher.hpp"
#include "ILogEntry.hpp"
#include <cstddef>
#include "LogEntry.hpp"
#include "Task.hpp"
#include <memory>
#include <utility>

Dispatcher::Dispatcher(std::unique_ptr<Task> task)
    : m_task(std::move(task))
{

}

void Dispatcher::registerInformation(const ILogEntry& log)
{
    const InformationData data{log.getDate(), log.getServerName(), log.getName(), log.getMessage()};
    m_values.push(data);
}

void Dispatcher::dispatchInformation()
{
    while (!m_values.empty())
    {
        Dispatcher::dataInformation(m_values.front());
        m_values.pop();
    }
}

void Dispatcher::dataInformation(const InformationData& value)
{
    if (m_task)
    {
        const LogEntry entry(value.date, value.serverName, value.name, value.message);
        m_task->execute(entry);
    }
}

std::size_t Dispatcher::getSize() const
{
    return m_values.size();
}
