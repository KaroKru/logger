#include <gtest/gtest.h>
#include "FileReader.hpp"
#include <string>
#include <fstream>


TEST(FileReaderTest, checkEmptyReadFile)
{
    std::string name = "";
    FileReader fileReader(name);
    EXPECT_THROW(fileReader.readFile(), std::runtime_error);
}

TEST(FileReaderTest, checkReadFile)
{
    std::string name = "file.txt";
    {
        std::ofstream file(name);
        file << "Line 1\n";
        file << "\n";
        file << "Line 2\n";
    }
    FileReader fileReader(name);
    std::vector<std::string> line = fileReader.readFile();

    EXPECT_EQ(line.size(), 2);
    EXPECT_EQ(line[0], "Line 1");
    EXPECT_EQ(line[1], "Line 2");

    std::remove(name.c_str());
}

//TEST(File)