/*

   Testing class 'student' in 'student' folder

*/

#pragma once
#ifndef TEST_STUDENT_HPP
#define TEST_STUDENT_HPP

#include <iostream>
#include <cassert>

#include "../include/student/student.hpp"

void test_student()
{
   // Test 1
   student s1;
   assert(s1.getName() == "");
   assert(s1.getSurname() == "");
   assert(s1.getAvgMark() == 0.0);
   assert(s1.getAttLessons() == 0);

   // Test 2
   student s2{"a", "b", 1.0, 1};
   assert(s2.getName() == "a");
   assert(s2.getSurname() == "b");
   assert(s2.getAvgMark() == 1.0);
   assert(s2.getAttLessons() == 1);

   // Test 3
   student s3("a", "b", 1.0, 1);
   assert(s3.getName() == "a");
   assert(s3.getSurname() == "b");
   assert(s3.getAvgMark() == 1.0);
   assert(s3.getAttLessons() == 1);

   // Test 4
   student s4;
   s4.setName("a");
   s4.setSurname("b");
   s4.setAvgMark(1.0);
   s4.setAttLessons(1);
   assert(s4.getName() == "a");
   assert(s4.getSurname() == "b");
   assert(s4.getAvgMark() == 1.0);
   assert(s4.getAttLessons() == 1);

   // Test 5
   student s7({"a", "b", 1.0, 1});
   assert(s7.getName() == "a");
   assert(s7.getSurname() == "b");
   assert(s7.getAvgMark() == 1.0);
   assert(s7.getAttLessons() == 1);

   std::cout << "\033[;32mTest class 'student' successful.\033[0m" << std::endl;
}

#endif //TEST_STUDENT_HPP