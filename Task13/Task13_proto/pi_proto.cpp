#include "input_reader.h"
#include <fstream>
#include <filesystem>
#include <windows.h>

//using std::filesystem::path;
using namespace std::literals;

int main(){
    setlocale(LC_ALL, "Russian"); //для перевода кодировки на работу с кириллицей
		SetConsoleOutputCP(1251); //чтоб в консоли выводилась кириллица
    SetConsoleCP(1251);  //чтоб в консоли выводилась кириллица
       const std::filesystem::path path = "Pi_Nilakantha.bin";
    PiSearcher pi_searcher;
Reader reader(pi_searcher);
std::cout << "Пожалуйста, введите запрос в формате: \"Ввод\" или \"Вывод\": " << std::endl;
reader.Input(path);	

}