#include "Dispatcher.hpp"
#include "ILogEntry.hpp"
#include <cstddef>
#include <iostream>

void Dispatcher::registerInformation(const ILogEntry& log)
{
    const InformationData data{log.getDate(), log.getServerName(), log.getName(), log.getMessage()};
    m_values.push(data);
}

void Dispatcher::dispatchInformation()
{
    while (!m_values.empty())
    {
        dataInformation(m_values.front());
        m_values.pop();
    }
}

void Dispatcher::dataInformation(const InformationData& value)
{
    std::cout << value.date << " " << value.serverName << " " << value.name << " " << value.message << std::endl;
}

std::size_t Dispatcher::getSize()
{
    return m_values.size();
}
