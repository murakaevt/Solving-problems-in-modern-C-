#include "input_reader.h"
#include <fstream>
#include <filesystem>
#include <windows.h>

//using std::filesystem::path;
using namespace std::literals;

int main(){
    setlocale(LC_ALL, "Russian"); //��� �������� ��������� �� ������ � ����������
		SetConsoleOutputCP(1251); //���� � ������� ���������� ���������
    SetConsoleCP(1251);  //���� � ������� ���������� ���������
       const std::filesystem::path path = "Pi_Nilakantha.bin";
    PiSearcher pi_searcher;
Reader reader(pi_searcher);
std::cout << "����������, ������� ������ � �������: \"����\" ��� \"�����\": " << std::endl;
reader.Input(path);	

}