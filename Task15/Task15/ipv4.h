#pragma once

#include <iostream>
#include <string>
#include <unordered_set>
#include <string_view>

struct IPv4HasherString {
    size_t operator()(const std::string& ipv4) const {
        return hasher(ipv4);
    }

    std::hash<std::string> hasher;
};

class IPv4{
public:
using Value = std::unordered_set<std::string, IPv4HasherString>;

IPv4() = default;

void SetIP(const std::string& str);

 const Value& GetValue() const;

private:
Value ip_container_;
std::string simbols_{"0123456789"};

bool Check(const std::string& str);
};

std::ostream& operator<<(std::ostream& out, const IPv4& ip_container);