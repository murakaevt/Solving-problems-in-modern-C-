//Напишите программу, проверяющую действительность 10-значных номеров ISBN-10, введенных пользователем в виде строки
#include "inspectorISBN.h"

#include <windows.h>
#include <iostream>
#include <conio.h>

void Cheker(InspectorISBN& inspector, const std::string& str){
bool result = inspector.check();
if(result){
std::cout << "Номер ISBN: " << str << " корректен!" << std::endl;
} else {
std:: cout << inspector.GetError() << std::endl;
}
}

void KBHit(bool& stat){
std::cout << "Продолжить? [y/n]" << std::endl;
int k = _getch();
if(k == static_cast<int>('n')){
stat = 0;
}
else if(k == static_cast<int>('y')){
    stat = 1;
} else{
    std::cin.clear();
    KBHit(stat);
}
}

int main(){
    setlocale(LC_ALL, "Russian");
		SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::string input;
    InspectorISBN inspector("");
    bool status = 1;
    while(status) {
        std::cout << "Пожалуйста, введите номер ISBN." << std::endl;
        std::getline(std::cin, input);
inspector.Set(input);
Cheker(inspector, input);
KBHit(status);
        }
}