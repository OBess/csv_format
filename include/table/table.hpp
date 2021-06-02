#pragma once
#ifndef TABLE_HPP
#define TABLE_HPP

// C++
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

// Custom
#include "../student/student.hpp"

namespace table
{

   void output(const std::vector<student> &v)
   {
      // Main variable for table
      char sign = '+';
      size_t index_for_sign = v.size() / 2;
      size_t size_name = 0, size_surname = 0;

      // Find values for variables
      for (const auto &el : v)
      {
         if (std::round(el.getAvgMark()) < 4 || el.getAttLessons() < 5)
            sign = '-';
         if (el.getName().length() > size_name)
            size_name = el.getName().length();
         if (el.getSurname().length() > size_surname)
            size_surname = el.getSurname().length();
      }

      // Display header
      const std::string succeeded = "Succeded", name = "Name", surname = "Surname", avg = "Avg mark", attended = "Attended";
      std::printf("%s %*s %*s %s %s\n", succeeded.c_str(), -(int)size_name, name.c_str(), -(int)size_surname, surname.c_str(), avg.c_str(), attended.c_str());

      // Display records
      for (size_t i = 0; i < v.size(); ++i)
      {
         if (i == index_for_sign)
            std::cout << std::setw(succeeded.length() / 2 + 1) << sign << std::setw(succeeded.length() / 2) << "";
         else
            std::cout << std::setw(succeeded.length() + 1) << "";
         std::cout << std::left << std::setw(size_name) << v[i].getName() << " "
                   << std::left << std::setw(size_surname) << v[i].getSurname() << " "
                   << std::right << std::setw(avg.length()) << std::setprecision(3) << v[i].getAvgMark() << " "
                   << std::internal << std::setw(attended.length() / 2 + 1) << v[i].getAttLessons() << std::endl;
      }
   }

} // namespace table

#endif //TABLE_HPP