#ifndef DISPATCHER_HPP
#define DISPATCHER_HPP

#include "ILogEntry.hpp"
#include <cstddef>
#include <string>
#include <queue>

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
    static void dataInformation(const InformationData& value);
    std::queue<InformationData> m_values;
};

#endif // Dispatcher