//Вычисление числа Пи с использованием серии Нилаканта.
#include "input_reader.h"
//#include "input_reader.cpp"
#include <windows.h>

int main() {
		setlocale(LC_ALL, "Russian");
		SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
PiSearcher pi_searcher;
Reader reader(pi_searcher);
std::cout << "Пожалуйста, введите запрос в формате: \"Ввод\" или \"Вывод\": " << std::endl;
reader.Input();	
}