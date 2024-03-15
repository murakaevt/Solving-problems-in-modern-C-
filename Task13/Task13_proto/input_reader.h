#pragma once
#include "pi_searcher.h"
#include "serialization.h"
//#include "pi_searcher.cpp"
#include <algorithm>
#include <string>
#include <limits>

class Reader{
public:
explicit Reader(PiSearcher& pi_searcher)
: pi_searcher_(pi_searcher),
  in_string("ввод"),
  out_string("вывод") {}

void Input(const std::filesystem::path& path);

private:
PiSearcher& pi_searcher_;
std::string in_string;
std::string out_string;
};