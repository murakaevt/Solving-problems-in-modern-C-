#include "inspectorISBN.h"

void InspectorISBN::Set(std::string_view string){
isbn_ = string;
}

std::string_view InspectorISBN::Get() const{
    return isbn_;
}

const std::string& InspectorISBN::GetError() const{
    return error_;
}

bool InspectorISBN::check(){
auto begin = isbn_.find_first_of(simbols_, 0);
auto end = isbn_.npos;
int sum = 0;
for(int i = 10; i > 1; --i){
    if(begin == end){
        error_ = "Номер введен некорректно. Недостаточно цифр.";
        return false;
    }
sum += i*(std::stoi(std::string(isbn_.substr(begin, 1))));
begin = isbn_.find_first_of(simbols_, begin+1);
}
 if(begin == end){
        error_ = "Номер введен некорректно. Не хватает контрольной цифры.";
        return false;
    }
  int control_number =  std::stoi(std::string(isbn_.substr(begin, 1))); 
begin = isbn_.find_first_of(simbols_, begin+1);
if(begin != end){
        error_ = "Номер введен некорректно. Количество цифр превышает 10.";
        return false;
    }
    int remainder_of_division_11 = sum % 11;
    if((11-remainder_of_division_11) == control_number){       
return true;
    } else {
error_ = "Номер ISBN некорректен. Контрольная цыфра не соответствует номеру.";
return false;
    }
}