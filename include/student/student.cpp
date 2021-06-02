#include "student.hpp"

student::student() : m_name(""), m_surname(""), m_avg_mark(0.0), m_att_lessons(0)
{
}

student::student(const student &other)
    : m_name(other.m_name), m_surname(other.m_surname),
      m_avg_mark(other.m_avg_mark), m_att_lessons(other.m_att_lessons)
{
}

student::student(const std::string &name, const std::string &surname,
                 const long double &avg_mark, const int &att_lessons)
    : m_name(name), m_surname(surname), m_avg_mark(avg_mark), m_att_lessons(att_lessons)
{
}

// Setters
void student::setName(const std::string &name)
{
   m_name = name;
}

void student::setSurname(const std::string &surname)
{
   m_surname = surname;
}

void student::setAvgMark(const long double &avg_mark)
{
   m_avg_mark = avg_mark;
}

void student::setAttLessons(const int &att_lessons)
{
   m_att_lessons = att_lessons;
}

// Getters
std::string student::getName() const
{
   return m_name;
}

std::string student::getSurname() const
{
   return m_surname;
}

long double student::getAvgMark() const
{
   return m_avg_mark;
}

int student::getAttLessons() const
{
   return m_att_lessons;
}