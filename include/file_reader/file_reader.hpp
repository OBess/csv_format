/*

   File with ONE function.
   Read all data from file and return string with that data.

*/

#pragma once
#ifndef FILE_READER_HPP
#define FILE_READER_HPP

#include <string>
#include <fstream>
#include <iterator>

inline std::string readfile(const std::string &path)
{
   // Open file with data
   std::ifstream file(path);
   // Read all data from file
   std::string data{std::istreambuf_iterator<char>{file},
                    std::istreambuf_iterator<char>{}};
   //Close file
   file.close();
   // Return string with data
   return data;
}

#endif //FILE_READER_HPP