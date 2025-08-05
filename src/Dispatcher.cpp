#include "Dispatcher.hpp"
#include "ILogEntry.hpp"
#include <cstddef>
#include <iostream>

void Dispatcher::registerInformation(const ILogEntry& log)
{
    const InformationData data{log.getDate(), log.getServerName(), log.getName(), log.getMessage()};
    m_values.push_back(data);
}

void Dispatcher::dispatchInformation()
{
    for (std::size_t i = m_disptachCount; i < m_values.size(); i++)
    {
        std::cout << m_values[i].date << " " << m_values[i].serverName << " " << m_values[i].name << " " << m_values[i].message << std::endl;
    }
    m_disptachCount = m_values.size();
}

std::size_t Dispatcher::getSize()
{
    return m_disptachCount;
}
