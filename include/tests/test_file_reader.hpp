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
   std::string path = "include/tests/text.txt";
   std::string expect = " Hello World!";

   // Test
   assert(readfile(path) == expect);

   std::cout << "\033[;32mTest function 'readfile' successful.\033[0m" << std::endl;
}

#endif //TEST_FILE_READER_HPP