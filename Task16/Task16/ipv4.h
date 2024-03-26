#pragma once

#include <iostream>
#include <string>
#include <set>
#include <string_view>
#include <deque>
#include <iterator>

/*
struct IPv4HasherString {
    size_t operator()(const std::string& ipv4) const {
        return hasher(ipv4);
    }

    std::hash<std::string> hasher;
};
*/

class IPv4{
public:
using Value = std::set<std::string>;

IPv4() = default;

void SetIP(const std::string& str);

 const Value& GetValue() const;

 const std::deque<std::string> GetValueRange(const std::string& first, const std::string& second) const;

private:
Value ip_container_;
std::string simbols_{"0123456789"};

bool Check(const std::string& str) const;
};

std::ostream& operator<<(std::ostream& out, const IPv4& ip_container);