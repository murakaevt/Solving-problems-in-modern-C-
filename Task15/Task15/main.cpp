//�������� �����, �������������� ����� IPv4. 
//���������� ������� ��� �����/������ ����� ������� � �������. 
//������������ ������ ����� ����������� ������� �������� � ������� � �������, ��������: 127.0.0.1 ��� 168.192.0.100.
//� ����� �� ������� ������ IPv4 ������ ���������� � �������� �����.
#include "ipv4.h"
#include <windows.h>
#include <conio.h>

void KBHit(bool& stat){
std::cout << "��������� ����? [y/n]" << std::endl;
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
     IPv4 ip_class;
    std::string ip_input;
    bool work  = 1;
    while(work){
    std::cout << "������� IP-����� � ������� XXX.XXX.XXX.XXX, ��� XXX - ��� ����� �� 0 �� 255." << std::endl;
    std::getline(std::cin, ip_input);
   ip_class.SetIP(ip_input);
   KBHit(work);  
    }
     std::cout << ip_class;
     system("pause");
}