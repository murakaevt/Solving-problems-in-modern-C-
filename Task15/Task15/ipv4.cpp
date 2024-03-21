#include "ipv4.h"

void IPv4::SetIP(const std::string& str){
  bool ip_status = Check(str);
  if(ip_status){
ip_container_.emplace(str);
  }
}

 const IPv4::Value& IPv4::GetValue() const {
        return ip_container_;
    }   

    bool IPv4::Check(const std::string& str){
auto begin = str.find_first_of(simbols_, 0);
auto end = str.npos;
auto pos = str.find_first_of('.', begin);
std::string_view buf;
int buf_counter= 0;
while(begin != end){
buf = str.substr(begin, pos - begin);
buf_counter += 1;
for(const auto& ch : buf){
    if(!std::isdigit(ch)){
 std::cout << "IP адрес введен не правильно." << std::endl;
    return 0;
    }
}
if(std::stoi(std::string(buf)) > 255){
    std::cout << "IP адрес введен не правильно." << std::endl;
    return 0;
}
begin = str.find_first_of(simbols_, pos);
pos = str.find_first_of('.', begin);
}
if(buf_counter != 4){
    std::cout << "IP адрес введен не правильно." << std::endl;
    return 0;
}
return 1;
}

std::ostream& operator<<(std::ostream& out, const IPv4& ip_container){
for(const auto& ip : ip_container.GetValue()){
out << ip << '\n';//std::endl;
}
return out;
}