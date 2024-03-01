//Напишите программу, которая определит и выведет число, меньшее
//1 000 000, порождающее наибольшую последовательность Коллатца, и длину
//этой последовательности
#include <iostream>
#include <atomic>
#include <future>
#include <chrono>

using namespace std::chrono;
using namespace std::literals;

class LogDuration {
public:
    LogDuration() {
    }

    ~LogDuration() {
        const auto end_time = steady_clock::now();
        const auto dur = end_time - start_time_;
        std::cout << "     " << duration_cast<milliseconds>(dur).count() << " ms"s << std::endl;
    }

private:
    // В переменной будет время конструирования объекта LogDuration
    const steady_clock::time_point start_time_ = steady_clock::now();
};

void func (int a, int b, std::atomic<uint64_t>& max_size, std::atomic<uint64_t>& number){
for(int i = a; i < b; i++){ 
    if(i == 113384){
        continue;
    }
 uint64_t j = i;
 uint64_t counter = 0;
    while(j != 1){
if(j % 2 == 0){
j = j/2;
counter++;
} else{
j = (3*j + 1);
counter++;
}
    }
    if(counter > max_size){
        max_size = counter;
        number = i;
    }  
}    
};

void ProgrammParallel (int max){   
    int max_number = max;   
    int half = max_number/2;
    int first_quarter= half/2;
    int second_quarter= half + first_quarter;

   std::atomic<uint64_t> max_size = 0;
   std::atomic<uint64_t> number = 0;
    

  auto first = std::async([&] {func(2, first_quarter, max_size, number);});
  auto second = std::async([&] {func(first_quarter, half, max_size, number);});
  auto third = std::async([&] {func(half, second_quarter, max_size, number);});
  auto forth = std::async([&] {func(second_quarter, max_number, max_size, number);});

  first.get();
  second.get();
  third.get();
  forth.get();

   std::cout << "A smaller number 1,000,000, generating the largest Collatz sequence: " << number << "  length this sequence: " << max_size;
}

int main() {
    int max_number;
    std::cin >> max_number;
    {
    LogDuration log;
ProgrammParallel(max_number);
    }
}