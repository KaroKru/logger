#ifndef FILEREADER_HPP
#define FILEREADER_HPP

#include <vector>
#include <string>

class FileReader
{
    public: 
    FileReader(std::string path);

    std::vector<std::string> readFile() const;

    private:
    std::string m_path;
};

#endif //FILEREADER_HPP