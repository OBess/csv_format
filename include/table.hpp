#pragma once
#ifndef TABLE_HPP
#define TABLE_HPP

// C++
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <sstream>
#include <string>
#include <fstream>

// Custom
#include "student.hpp"

namespace table
{

#define DELIMITER ','

   void output(const std::vector<student> &v);

   namespace parser
   {
      static inline student get_student(const std::string &data);

      std::vector<student> parsing(const std::string &path);
   };

} // namespace table

#endif //TABLE_HPP