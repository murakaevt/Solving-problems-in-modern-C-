#pragma once
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdint>
#include <vector>
#include <tuple>

struct Pi {
double value_;           //значение числа Пи.
uint64_t series_length_; //длина серии Нилаканта.
uint64_t input_number_;  //введеное число, до которого вычисляется серия Нилаканта.
};

class PiSearcher{
public:
PiSearcher()= default;

void Add(uint64_t input_number);

void Print() const;

const std::vector<Pi>* Get() const;

private:
std::vector<Pi> pi_vector_;

std::tuple<double, uint64_t> PiSearcherNilakanthaSeries(uint64_t input_number);

Pi PiCreator(uint64_t input_number);
};

