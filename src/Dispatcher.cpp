#include "Dispatcher.hpp"
#include <iostream>

void Dispatcher::register(const ILogEntry& log)
{
    InfomrationData data{log.getDate(), log.getServerName(), log.getName(), log.getMessage()};
    m_values.push_back();
}

void Dispatcher::dispatch(const ILogEntry& log)
{
    std::cout << log.getDate() << " " << log.getServerName() << " " << log.getName() << " " << log.getMessage() << std::endl;
}