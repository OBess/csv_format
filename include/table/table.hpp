#pragma once
#ifndef TABLE_HPP
#define TABLE_HPP

// C++
#include <iostream>
#include <vector>

// Custom
#include "../student/student.hpp"

namespace table
{

   void output(const std::vector<student> &v)
   {
      // Main variable for table
      char succeeded = '+';
      int size_name = 0, size_surname = 0;

      // Find values for variables
      for (const auto &el : v)
      {
         if ((int)el.getAvgMark() < 4 || el.getAttLessons() <= 5)
            succeeded = '-';
         if (el.getName().length() > size_name)
            size_name = el.getName().length();
         if (el.getSurname().length() > size_surname)
            size_surname = el.getSurname().length();
      }

      // Output header
      std::printf("Succeded", 4);
      
   }

} // namespace table

#endif //TABLE_HPP