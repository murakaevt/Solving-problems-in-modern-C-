#include <iostream>
#include <string_view>
#include <string>
#include <vector>
#include <map>

static const std::map<int, std::string> rome_numbers {{0,"N"}, {1,"I"}, {2,"II"}, {3,"III"}, {4,"IV"}, {5,"V"}, {6,"VI"}, {7,"VII"}, {8,"VIII"}, {9,"IX"}, {10,"X"},
                                                     {40, "XL"}, {50, "L"}, {60, "LX"}, {70, "LXX"}, {80, "LXXX"}, {90, "XC"}, 
                                                     {100, "C"}, {400, "CD"}, {500, "D"}, {600, "DC"}, {700, "DCC"}, {800, "DCCC"}, {900, "CM"}, {1000, "M"}};

class Reader {
public:
Reader() = default;
void Read(std::istream& in);

std::string RomeTransformerAndPrinter();

private:
std::vector<int> value_{};
int value_size_{0};

void ProgramForThousands(std::string& str, int val);

void ProgramForHundreds(std::string& str, int val);

void ProgramForDozens(std::string& str, int val);

void ProgramForUnits(std::string& str, int val);
};