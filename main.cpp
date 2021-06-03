// C++
#include <iostream>

// Custom
#include "include/student.hpp"
#include "include/table.hpp"

int main()
{
   // Main
   const std::string path = "data.txt";
   const auto parsed = table::parser::parsing(path);
   table::output(parsed);

   return EXIT_SUCCESS;
}