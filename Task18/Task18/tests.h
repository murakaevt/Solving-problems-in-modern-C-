#pragma once
#include "functions.h"

void Test1(){
std::cout<< "Test 1: minimum with 2 args"<< std::endl;
std::cout << minimum(114, 2) << std::endl;
}

void Test2(){
std::cout<< "Test 2: minimum with more args"<< std::endl;
std::cout << minimum(114, 2, 3, 3454, 45, 73) << std::endl;
}

void Test3(){
std::cout<< "Test 3: minimum with 2 args and compare function"<< std::endl;
std::cout << minimumc(std::less<>(), 2, 73) << std::endl;
}

void Test4(){
std::cout<< "Test 4: minimum with more args and compare function"<< std::endl;
std::cout << minimumc(std::less<>(), 114, 2, 3, 3454, 45, 73) << std::endl;
}