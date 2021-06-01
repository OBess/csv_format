// C++
#include <iostream>

// Custom
#include "include/struct/struct.hpp"
#include "include/file_reader/file_reader.hpp"

// Tests
#include "include/tests/test_struct.hpp"
#include "include/tests/test_file_reader.hpp"

int main()
{
   // Tests
   test_struct();
   test_readfile();

   

   return EXIT_SUCCESS;
}