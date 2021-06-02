#pragma once
#ifndef PARSER_HPP
#define PARSER_HPP

// C++
#include <iostream>
#include <iterator>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

// Custom
#include "../student/student.hpp"

// Define
#define DELIMITER ','

namespace parser
{

   namespace
   {
      inline student get_student(const std::string &data)
      {
         std::istringstream tokenizer(data);
         std::string word;
         student s;

         std::getline(tokenizer, word, DELIMITER);
         s.setName(word);
         std::getline(tokenizer, word, DELIMITER);
         s.setSurname(word);
         std::getline(tokenizer, word, DELIMITER);
         s.setAvgMark(std::stold(word));
         std::getline(tokenizer, word);
         s.setAttLessons(std::stoi(word));

         return s;
      }
   }

   std::vector<student> parsing(const std::string &path)
   {
      // Read data
      std::ifstream file(path);

      // Vector with final result
      std::vector<student> v;
      std::string line;

      // Getting objects
      while (std::getline(file, line))
         v.push_back(get_student(line));

      file.close();
      // Return vector of students
      return v;
   }
};

#endif //PARSER_HPP