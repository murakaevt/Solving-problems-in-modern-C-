#include "numbers.h"

namespace number{

Numbers::Numbers():
numbers_({})
{
for(int i = 16; i < 32; i++){
int i_g = i ^ (i >> 1); 
numbers_.push_back({i, i_g});
}
}

void Numbers::Print(){
    for(const auto& n : numbers_){
        std::cout << "Binary: " << ToBinary(n.b_type) << "  Gray: " << ToBinary(n.g_type) << "  DecodingGray: " << Graydecode(n.g_type) << "." << std::endl;
    }
}

std::bitset<8> Numbers::ToBinary(int n) {
	return std::bitset<8>(n);
}

unsigned int Numbers::Graydecode(unsigned int gray) 
{
    unsigned int bin;
    for (bin = 0; gray; gray >>= 1) {
      bin ^= gray;
    }
    return bin;
}
}