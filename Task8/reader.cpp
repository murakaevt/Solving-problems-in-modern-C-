#include "reader.h"

void Reader::Read(std::istream& in){
std::string str_read;
if(!std::isdigit(in.peek())){
throw std::runtime_error("A digit is expected");
}
while(std::isdigit(in.peek())){
str_read += static_cast<char>(in.get());
str = str_read;
}
}

void Reader::Work(std::ostream& out){
Transform();
Armstrong_searcher();
if(arm_numbers.empty()){
    out << "No Armstrong numbers";
}else{
for(const auto& arm_num : arm_numbers){
out << arm_num << "  ";
}
}
}

void Reader::Transform(){
number = std::stoi(str);
}

void Reader::Armstrong_searcher(){
for(int i = number; i > 0; i--) {
double sum{0};
std::string str_b = std::to_string(i);
int degree = static_cast<int>(str_b.size());
for(const char& l : str_b){   
    int n = l - '0';
sum += std::pow(n, degree);
}
if(sum == i){
    arm_numbers.push_back(i);
}else{
    sum = 0;
}
}
}