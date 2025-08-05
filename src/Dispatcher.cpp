#include "Dispatcher.hpp"
#include "ILogEntry.hpp"
#include <iostream>

void Dispatcher::registerInformation(const ILogEntry& log)
{
    const InformationData data{log.getDate(), log.getServerName(), log.getName(), log.getMessage()};
    m_values.push_back(data);
}

void Dispatcher::dispatchInformation(const ILogEntry& log)
{
    std::cout << log.getDate() << " " << log.getServerName() << " " << log.getName() << " " << log.getMessage() << std::endl;
}

std::size_t Dispatcher::getSize()
{
    return m_values.size();
}