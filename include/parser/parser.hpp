#pragma once
#ifndef PARSER_HPP
#define PARSER_HPP

// C++
#include <iostream>
#include <iterator>
#include <fstream>
#include <string>
#include <vector>

class parser
{
public:
   parser() = default;
   ~parser() = default;

   parser(const parser &) = delete;
   parser &operator=(const parser &) = delete;

   std::vector<> parsing(const std::string& path) const;

private:
   inline std::string _readfile(const std::string &path);

   std::string m_path;
};

#endif //PARSER_HPP