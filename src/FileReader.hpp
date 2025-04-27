#ifndef FILEREADER_HPP
#define FILEREADER_HPP

#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>

class FileReader
{
    public: 
    FileReader(std::string path);

    const std::vector<std::string> readFile();

    private:
    std::string m_path = "";
};

#endif //FILEREADER_HPP