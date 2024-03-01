#include "prime_factors_number.h"
#include "simple_numbers.h"


int main() {
int number;
std::cin >> number;
PrimeNumbers PN;
PN.PrintPrimeNumbers(number);
std::cout << std::endl;
system("pause");
}