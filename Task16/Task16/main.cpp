//Напишите программу, которой пользователь мог бы передать два адреса IPv4,
//представляющих диапазон, и получить список всех адресов в этом диапазоне. 
//Добавьте эту функциональность в класс из предыдущего задания.
#include "ipv4.h"
#include "serialization.h"
#include <windows.h>
#include <conio.h>

using namespace std::literals;

void KBHit(bool& stat){
std::cout << "Повторить ввод? [y/n]" << std::endl;
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
std::cout << "Введите IP-адрес в формате XXX.XXX.XXX.XXX, где XXX - это число от 0 до 255." << std::endl;
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
    std::cout << "Введите два IP-адреса в формате XXX.XXX.XXX.XXX через пробел, где XXX - это число от 0 до 255." << std::endl;
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
    std::cout << "Что Вы хотите сделать?" << std::endl
              << "1. Ввести IP." << std::endl
              << "2. Вывести весь список IP." << std::endl
              << "3. Вывести IP в определенном диапазоне." << std::endl
              << "4. Завершить работу программы." << std::endl
              << "Для выбора введите 1, 2, 3 или 4." << std::endl;
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
std::cout << "Неизвестный запрос" << std::endl;
    break;
}
}



int main(){
     setlocale(LC_ALL, "Russian");
		SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    const std::filesystem::path path = "IPv4.bin";
    if(!std::filesystem::exists(path)){
    std::cout << "Создайте файл IPv4.bin в папке в которой находиться IPv4.exe и перезапустите программу!" << std::endl;
    } else{
     IPv4 ipv4;   
    bool work  = 1;
    while(work){
    Entrance(ipv4, work, path);
    }     
    }
     system("pause");
}