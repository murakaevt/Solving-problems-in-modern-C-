//Напишите программу, которая для заданного десятичного 
//значения выведет его эквивалент в виде римского числа.
#include "reader.h"

int main() {
   Reader reader;
   std::cout << "Please, enter a number no more than 3999:" << std::endl;
   reader.Read(std::cin);
   std::cout << reader.RomeTransformerAndPrinter(); 
}