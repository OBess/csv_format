// C++
#include <iostream>

// Custom
#include "include/student/student.hpp"
#include "include/parser/parser.hpp"

// Tests
#include "tests/test_student.hpp"
#include "tests/test_parser.hpp"

int main()
{
   // Tests
   test_student();
   test_parsing();
   

   return EXIT_SUCCESS;
}