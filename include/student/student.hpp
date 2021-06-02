#pragma once
#ifndef STRUCT_HPP
#define STRUCT_HPP

// C++
#include <string>
#include <utility>
#include <initializer_list>

class student
{
public:
   student();
   student(const student &other);
   student(const std::string &name, const std::string &surname,
           const long double &avg_mark, const int &att_lessons);
   ~student() = default;

   // Setters
   void setName(const std::string &name);
   void setSurname(const std::string &surname);
   void setAvgMark(const long double &avg_mark);
   void setAttLessons(const int &att_lessons);

   // Getters
   std::string getName() const;
   std::string getSurname() const;
   long double getAvgMark() const;
   int getAttLessons() const;

private:
   std::string m_name;
   std::string m_surname;
   long double m_avg_mark;
   int m_att_lessons;
};

#endif //STRUCT_HPP