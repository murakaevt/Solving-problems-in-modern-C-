//Напишите шаблонный класс, представляющий двумерный массив, 
//с методами доступа к элементам (at() и data()), 
//определения емкости, заполнения,
//перестановки и итераторами. 
//Класс должен поддерживать перемещение объектов данного типа.
#include "array.h"
#include <windows.h>
#include <string>

void Test1 (){  
    int mass[]{1, 2, 3 ,4, 5, 6, 7, 8, 9, 10};
Array<int> array(10, 10);
for(int i = 0; i < 10; ++i){
array.Add(i, i, mass[i]);
}
array.Print();
}

void Test2() {
std::string mass[]{"fasf", "rgwef", "saf", "safas", "faf", "fsaf", "fsa", "faa"};
Array<std::string> array(8, 8);
for(int i = 0; i < 10; ++i){
array.Add(i, i, mass[i]);
}
array.Print();
std::cout << array.At(5,5) << std::endl;
std::cout << array.Data()[0] << std::endl;
std::cout << array.Size() << std::endl;
}

void Test3(){
    int mass[]{1, 2, 3 ,4, 5, 6, 7, 8, 9, 10};
Array<int> array(10, 10);
for(int i = 0; i < 10; ++i){
array.Add(i, i, mass[i]);
}
array.Print();
array.Permutation(2,2,3,3);
int f = 7;
int s = 9;
array.Permutation(f,s);
array.Print();
}

void Test4(){
    int mass[]{1, 2, 3 ,4, 5, 6, 7, 8, 9, 10};
Array<int> array(10, 10);
for(int i = 0; i < 10; ++i){
array.Add(i, i, mass[i]);
}
std::cout << "array" << std::endl;
array.Print();
Array<int> array_copy(10, 10);
array_copy = std::move(array);
std::cout << "array_copy" << std::endl;
array_copy.Print();
}

void Test5(){
     int mass[]{1, 2, 3 ,4, 5, 6, 7, 8, 9, 10};
Array<int> array(10, 10);
for(int i = 0; i < 10; ++i){
for(int j = 0; j < 10; ++j){
array.Add(i, j, mass[i]);
}
}
array.Print();
for(auto it = array.begin(); it != array.end(); ++it){
    std::cout << *it << " ";
}
}

int main() {
      setlocale(LC_ALL, "Russian");
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
std::cout << "Test1:" << std::endl;
Test1();
std::cout << "Test2:" << std::endl;
Test2();
std::cout << "Test3:" << std::endl;
Test3();
std::cout << "Test4:" << std::endl;
Test4();
std::cout << "Test5:" << std::endl;
Test5();
system("pause");
}