#include "table.hpp"

void table::output(const std::vector<student> &v)
{
   // Main variable for table
   char sign = '+';
   const std::string succeeded = "Succeded", name = "Name", surname = "Surname", avg = "Avg mark", attended = "Attended";
   size_t size_name = name.length(), size_surname = surname.length();

   // Find values for variables
   for (const auto &el : v)
   {
      if (std::round(el.avg_mark) < 4 || el.att_lessons < 5)
         sign = '-';
      if (el.name.length() > size_name)
         size_name = el.name.length();
      if (el.surname.length() > size_surname)
         size_surname = el.surname.length();
   }

   // Display header
   std::printf("%s %*s %*s %s %s\n", succeeded.c_str(), -(int)size_name, name.c_str(), -(int)size_surname, surname.c_str(), avg.c_str(), attended.c_str());

   // Display records
   for (size_t i = 0; i < v.size(); ++i)
   {
      if (i == v.size() / 2)
         std::cout << std::setw(succeeded.length() / 2 + 1) << sign << std::setw(succeeded.length() / 2) << "";
      else
         std::cout << std::setw(succeeded.length() + 1) << "";

      std::cout << std::left << std::setw(size_name) << v[i].name << " "
                << std::left << std::setw(size_surname) << v[i].surname << " "
                << std::right << std::setw(avg.length()) << std::setprecision(3) << v[i].avg_mark << " "
                << std::internal << std::setw(attended.length() / 2 + 1) << v[i].att_lessons << std::endl;
   }
}

static inline student table::parser::get_student(const std::string &data)
{
   std::istringstream tokenizer(data);
   std::string word;
   student s;

   std::getline(tokenizer, word, DELIMITER);
   s.name = word;
   std::getline(tokenizer, word, DELIMITER);
   s.surname = word;
   std::getline(tokenizer, word, DELIMITER);
   s.avg_mark = std::stold(word);
   std::getline(tokenizer, word);
   s.att_lessons = std::stoi(word);

   return s;
}

std::vector<student> table::parser::parsing(const std::string &path)
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