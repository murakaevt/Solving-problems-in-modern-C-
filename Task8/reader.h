#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>

class Reader {
public:
Reader()=default;

void Read(std::istream& in);

void Work(std::ostream& out);

private:
std::string str{};
int number{0};
std::vector<int> arm_numbers{};

void Transform();

void Armstrong_searcher();
};