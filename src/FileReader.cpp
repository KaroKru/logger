#include "FileReader.hpp"
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>

FileReader::FileReader(const std::string path) 
    : m_path(path)
{

}

std::vector<std::string> FileReader::readFile() const
{
    std::vector<std::string> readFile;
    std::string readedLine;
    std::ifstream openFile(m_path);

    if (!openFile.is_open()) 
    {
        throw std::runtime_error("Invalid file");
    }

    while (std::getline(openFile, readedLine)) 
    {
        if (!readedLine.empty()) 
        {
            readFile.push_back(readedLine);
        }
    }
    return readFile;
}