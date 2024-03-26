//�������� ���������, ������� ������������ ��� �� �������� ��� ������ IPv4,
//�������������� ��������, � �������� ������ ���� ������� � ���� ���������. 
//�������� ��� ���������������� � ����� �� ����������� �������.
#include "ipv4.h"
#include "serialization.h"
#include <windows.h>
#include <conio.h>

using namespace std::literals;

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

void InputIP(IPv4& ipv4, const std::filesystem::path& path){
    std::string ip_input;
    bool work_input = 1;
    while(work_input){
std::cout << "������� IP-����� � ������� XXX.XXX.XXX.XXX, ��� XXX - ��� ����� �� 0 �� 255." << std::endl;
    std::getline(std::cin, ip_input);
    ipv4.SetIP(ip_input);
    Serialize(path, ipv4);
     KBHit(work_input);
    }
}

void OutputAllIP(const std::filesystem::path& path){
    std::optional<Proto::IPv4> ipv4_proto = Deserialize(path);
     for(const auto& ip : ipv4_proto->list()){
        std::cout << ip << std::endl;
     }
}

void OutputIPRange(const std::filesystem::path& path){
    std::cout << "������� ��� IP-������ � ������� XXX.XXX.XXX.XXX ����� ������, ��� XXX - ��� ����� �� 0 �� 255." << std::endl;
    std::string first_ip, second_ip;
    std::cin >> first_ip >> second_ip;
    std::optional<Proto::IPv4> ipv4_proto = Deserialize(path);
    IPv4 ipv4_buf = DeserializeIPv4(*ipv4_proto);
   std::deque<std::string> ip_list = ipv4_buf.GetValueRange(first_ip, second_ip);
   for(const auto& ip : ip_list){
    std::cout << ip << std::endl;
   }    
}

void Entrance(IPv4& ipv4, bool& status, const std::filesystem::path& path){
    std::cout << "��� �� ������ �������?" << std::endl
              << "1. ������ IP." << std::endl
              << "2. ������� ���� ������ IP." << std::endl
              << "3. ������� IP � ������������ ���������." << std::endl
              << "4. ��������� ������ ���������." << std::endl
              << "��� ������ ������� 1, 2, 3 ��� 4." << std::endl;
              int k = _getch();
switch (k)
{
case '1':
    InputIP(ipv4, path);
    break;
case '2':
    OutputAllIP(path); 
    break;
case '3':
    OutputIPRange(path);
    break;
case '4':
    status = 0;
    break;
default:
std::cout << "����������� ������" << std::endl;
    break;
}
}



int main(){
     setlocale(LC_ALL, "Russian");
		SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    const std::filesystem::path path = "IPv4.bin";
    if(!std::filesystem::exists(path)){
    std::cout << "�������� ���� IPv4.bin � ����� � ������� ���������� IPv4.exe � ������������� ���������!" << std::endl;
    } else{
     IPv4 ipv4;   
    bool work  = 1;
    while(work){
    Entrance(ipv4, work, path);
    }     
    }
     system("pause");
}