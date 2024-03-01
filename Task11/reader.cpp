#include "reader.h"

void Reader::Read(std::istream& in){
std::vector<int> vec_int;
if(!std::isdigit(in.peek())){
throw std::runtime_error("A digit is expected");
}
else{
    while (std::isdigit(in.peek())){
vec_int.push_back(in.get() - '0');
    }  
    value_ = vec_int; 
    value_size_ = vec_int.size();     
}
}

std::string Reader::RomeTransformerAndPrinter(){
std::string out_string;
if(value_size_ == 4){
ProgramForThousands(out_string, value_[0]);
ProgramForHundreds(out_string, value_[1]);
ProgramForDozens(out_string, value_[2]);
ProgramForUnits(out_string, value_[3]);
}
else if(value_size_ == 3){
ProgramForHundreds(out_string, value_[0]);
ProgramForDozens(out_string, value_[1]);
ProgramForUnits(out_string, value_[2]);
}
else if(value_size_ == 2){
ProgramForDozens(out_string, value_[0]);
ProgramForUnits(out_string, value_[1]);
}else if(value_size_ == 1){
   ProgramForUnits(out_string, value_[0]);
}
return out_string;
}

void Reader::ProgramForThousands(std::string& str, int val) {
if(val == 0){
    str += "";
}
else if(val >= 4){
str += "Please, enter a number no more than 3999!";
}
else if(val < 4 && val != 0){
 for(int j = 1; j <= val; j++){
 str += rome_numbers.at(1000);
 }
}
}

void Reader::ProgramForHundreds(std::string& str, int val){
if(val == 0){
    str += "";
}
else if(val < 4 && val != 0){
 for(int j = 1; j <= val; j++){
 str += rome_numbers.at(100);
 }
}
else if(val == 4){
str += rome_numbers.at(400);
}
else if(val > 4 && val < 9){
str += rome_numbers.at(val*100);
}
else {
str += rome_numbers.at(900);
}
}

void Reader::ProgramForDozens(std::string& str, int val){
if(val == 0){
    str += "";
}
else if(val < 4 && val != 0){
 for(int j = 1; j <= val; j++){
 str += rome_numbers.at(10);
 }
}
else if(val == 4){
str += rome_numbers.at(40);
}
else if(val > 4 && val < 9){
str += rome_numbers.at(val*10);
}
else {
str += rome_numbers.at(90);
}
}

void Reader::ProgramForUnits(std::string& str, int val){
if(val == 0){
    str += "";
} else{
str += rome_numbers.at(val);
}
}