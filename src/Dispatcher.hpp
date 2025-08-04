#ifndef DISPATCHER_HPP
#define DISPATCHER_HPP

#include "ILogEntry.hpp"
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

    static void dispatchInformation(const ILogEntry& log);

private:
    std::vector<InformationData> m_values;
};

#endif // Dispatcher