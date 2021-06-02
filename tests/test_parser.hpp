/*

   Testing function 'parsing' in 'parser' folder

*/

#pragma once
#ifndef TEST_PARSER_HPP
#define TEST_PARSER_HPP

#include <iostream>
#include <cassert>

#include "../include/student/student.hpp"
#include "../include/parser/parser.hpp"

void test_parsing()
{
   // Test
   const std::string path = "tests/text.txt";
   std::vector<student> s{
       student("Grigorii", "Skovoroda", 3.56348756, 5),
       student("Taras", "Shevchenko", 4, 5),
       student("Hose", "De San-Martin", 4.9, 9),
   };

   auto p = parser::parsing(path);
   for (size_t i = 0; i < p.size(); ++i)
   {
      assert(p[i].getName() == s[i].getName());
      assert(p[i].getSurname() == s[i].getSurname());
      assert((int)p[i].getAvgMark() == (int)s[i].getAvgMark());
      assert(p[i].getAttLessons() == s[i].getAttLessons());
   }

   std::cout << "\033[;32mTest function 'parsing' successful.\033[0m" << std::endl;
}

#endif //TEST_PARSER_HPP