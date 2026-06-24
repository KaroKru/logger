#ifndef DISPATCHER_HPP
#define DISPATCHER_HPP

#include <cstddef>
#include <string>
#include <queue>
#include <memory>


class ILogEntry;
class Task;
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
    explicit Dispatcher(std::unique_ptr<Task> task);
    void registerInformation(const ILogEntry& log);

    void dispatchInformation();

    std::size_t getSize();

private:
    void dataInformation(const InformationData& value);
    std::queue<InformationData> m_values;
    std::unique_ptr<Task> m_task;
};

#endif // Dispatcher