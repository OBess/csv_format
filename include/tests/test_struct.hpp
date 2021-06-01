/*

   Testing class 'Student' in 'struct' folder

*/

#pragma once
#ifndef TEST_STRUCT_HPP
#define TEST_STRUCT_HPP

#include <iostream>
#include <cassert>

#include "../struct/struct.hpp"

void test_struct()
{
   // Test 1
   Student s1;
   assert(s1.getName() == "");
   assert(s1.getSurname() == "");
   assert(s1.getAvgMark() == 0.0);
   assert(s1.getAttLessons() == 0);

   // Test 2
   Student s2{"a", "b", 1.0, 1};
   assert(s2.getName() == "a");
   assert(s2.getSurname() == "b");
   assert(s2.getAvgMark() == 1.0);
   assert(s2.getAttLessons() == 1);

   // Test 3
   Student s3("a", "b", 1.0, 1);
   assert(s3.getName() == "a");
   assert(s3.getSurname() == "b");
   assert(s3.getAvgMark() == 1.0);
   assert(s3.getAttLessons() == 1);

   // Test 4
   Student s4;
   s4.setName("a");
   s4.setSurname("b");
   s4.setAvgMark(1.0);
   s4.setAttLessons(1);
   assert(s4.getName() == "a");
   assert(s4.getSurname() == "b");
   assert(s4.getAvgMark() == 1.0);
   assert(s4.getAttLessons() == 1);

   std::cout << "\033[;32mTest class 'Student' successful.\033[0m" << std::endl;
}

#endif //TEST_STRUCT_HPP