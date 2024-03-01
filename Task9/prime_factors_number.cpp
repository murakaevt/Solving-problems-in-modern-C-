#include "prime_factors_number.h"

void PrimeNumbers::PrintPrimeNumbers(int num){
prime_factors = SearchDivisors(num);
if(!prime_factors.empty()){
for(const auto& f : prime_factors){
std::cout << f << "   ";
}
std::cout << "1";
 prime_factors.clear();
}
else{
    std::cout << "No prime factors!";
}
}

std::deque<int> PrimeNumbers::SearchDivisors(int num){
    std::deque<int> pf;
for(int i = num/2; i>0; i--){
    if(checker.CheckNumber(i) && num%i == 0){
pf.push_back(i);
    }
}
return pf;
}