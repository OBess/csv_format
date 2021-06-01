/*

   Testing function 'readfile' in 'file_reader' folder

*/

#pragma once
#ifndef TEST_FILE_READER_HPP
#define TEST_FILE_READER_HPP

#include <iostream>
#include <cassert>

#include "../file_reader/file_reader.hpp"

void test_readfile()
{
   std::string path = "text.txt";
   std::string expect = R"(Hello World!
How are you?
   What are you doing?)";
   
   // Test
   assert(readfile(path) == expect);

   std::cout << "Test function 'readfile' successful." << std::endl;
}

#endif //TEST_FILE_READER_HPP