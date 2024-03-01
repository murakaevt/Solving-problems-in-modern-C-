#include "number.h"
#include <iostream>
#include <vector>
#include <bitset>

namespace number{

class Numbers{   
public:

Numbers();

void Print();

~Numbers()=default;

private:
std::vector<Number> numbers_{};

std::bitset<8> ToBinary(int n);

unsigned int Graydecode(unsigned int gray);
};
}