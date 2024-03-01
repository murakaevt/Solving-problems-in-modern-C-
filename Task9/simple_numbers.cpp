#include "simple_numbers.h"

bool CheckerSimpleNumber::CheckNumber(int num){
std::deque<int> dividers;
for(int i = num/2; i>0; i--){
    if(num % i == 0){
dividers.push_back(i);
    }
}
if(dividers.size() == 1){
    return true;
}else{
    return false;
}
}