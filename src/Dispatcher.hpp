#ifndef DISPATCHER_HPP
#define DISPATCHER_HPP

#include "ILogEntry.hpp"
#include <cstddef>
#include <string>
#include <vector>

struct InformationData
{
    std::string date;
    std::string serverName;
    std::string name;
    std::string message;
};

class Dispatcher
{
public:
    void registerInformation(const ILogEntry& log);

    void dispatchInformation();

    std::size_t getSize();

private:
    std::vector<InformationData> m_values;
    std::size_t m_disptachCount = 0;
};

#endif // Dispatcher