//���������� ����� �� � �������������� ����� ���������.
#include "input_reader.h"
//#include "input_reader.cpp"
#include <windows.h>

int main() {
		setlocale(LC_ALL, "Russian");
		SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
PiSearcher pi_searcher;
Reader reader(pi_searcher);
std::cout << "����������, ������� ������ � �������: \"����\" ��� \"�����\": " << std::endl;
reader.Input();	
}