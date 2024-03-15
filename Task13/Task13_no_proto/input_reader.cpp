#include "input_reader.h"

void Reader::Input(){
std::string type_of_request;
bool is_first = true;
while(1){ 
    if(is_first == 0){
        std::cout << "Повторите запрос: " << std::endl;
    }
    is_first = 0;        
    std::cin >> type_of_request;
    std::transform(type_of_request.begin(), type_of_request.end(), type_of_request.begin(), ::tolower);    
    if(type_of_request == in_string) {       
std::cout << "Введите число: " ;
uint64_t number;
if(std::cin >> number){
pi_searcher_.Add(number);
} else{   
    std::cout << "Введено не число!" << std::endl;   
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
    } else if(type_of_request == out_string) {
        pi_searcher_.Print();
    } else {       
std::cout << "Пожалуйста, введите запрос в формате: \"Ввод\" или \"Вывод\"!" << std::endl;
    }
}
}