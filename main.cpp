// C++
#include <iostream>

// Custom
#include "include/student/student.hpp"
#include "include/parser/parser.hpp"
#include "include/table/table.hpp"

int main()
{
   // Main
   const std::string path = "data.txt";
   const auto parsed = parser::parsing(path);
   table::output(parsed);

   return EXIT_SUCCESS;
}