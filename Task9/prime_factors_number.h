#pragma once
#include "simple_numbers.h"
#include <iostream>

class PrimeNumbers{
public:
PrimeNumbers()= default;

void PrintPrimeNumbers(int num);

private:
CheckerSimpleNumber checker;
std::deque<int> prime_factors;

std::deque<int> SearchDivisors(int num);
};