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
    for (const auto& value : m_values)
    {
        std::cout << value.date << " " << value.serverName << " " << value.name << " " << value.message << std::endl;
    }
}

std::size_t Dispatcher::getSize()
{
    return m_values.size();
}