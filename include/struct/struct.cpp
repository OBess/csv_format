#include "struct.hpp"

Student::Student() : m_name(""), m_surname(""), m_avg_mark(0.0), m_att_lessons(0)
{
}

template <typename... Args>
Student::Student(const std::initializer_list<Args...> &args)
{
   m_name = args[0];
   m_surname = args[1];
   m_avg_mark = args[2];
   m_att_lessons = args[3];
}

Student::Student(const std::string &name, const std::string &surname,
                 const long double &avg_mark, const int &att_lessons)
    : m_name(name), m_surname(surname), m_avg_mark(avg_mark), m_att_lessons(att_lessons)
{
}

// Setters
void Student::setName(const std::string &name)
{
   m_name = name;
}

void Student::setSurname(const std::string &surname)
{
   m_surname = surname;
}

void Student::setAvgMark(const long double &avg_mark)
{
   m_avg_mark = avg_mark;
}

void Student::setAttLessons(const int &att_lessons)
{
   m_att_lessons = att_lessons;
}

// Getters
std::string Student::getName() const
{
   return m_name;
}

std::string Student::getSurname() const
{
   return m_surname;
}

long double Student::getAvgMark() const
{
   return m_avg_mark;
}

int Student::getAttLessons() const
{
   return m_att_lessons;
}