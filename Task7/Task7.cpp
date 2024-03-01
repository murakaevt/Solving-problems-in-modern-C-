#include <iostream>
#include <vector>
#include <utility>
#include <numeric>
#include <algorithm>
#include <windows.h>
#include <map>
#include <iterator>
#include <chrono>
//#include <thread>

using namespace std;
using namespace chrono;
static const int mil = 100001;

class LogDuration {
public:
    LogDuration() {
    }

    ~LogDuration() {
        const auto end_time = steady_clock::now();
        const auto dur = end_time - start_time_;
        cout << "     " << duration_cast<milliseconds>(dur).count() << " ms"s << endl;
    }

private:
    // В переменной будет время конструирования объекта LogDuration
    const steady_clock::time_point start_time_ = steady_clock::now();
};

vector<int> FinderNumbersAndSumOfDivisors(const int num) {
    vector<int> numbers_sum_of_divisors(num);
    for (int i = num - 1; i > 1; i--) {
        vector<int> dividers;
        for (int j = i / 2; j > 0; j--) {
            if (i % j == 0) {
                dividers.push_back(j);
            }
        }
        int sum_of_dividers = accumulate(dividers.begin(), dividers.end(), 0);
        numbers_sum_of_divisors[i] = sum_of_dividers;
    }
    return numbers_sum_of_divisors;
}

map<int, int> FinderFriendlyNumber(const int num) {
    map<int, int> friendly_numbers;
    vector<int> numbers_sum_of_divisors = FinderNumbersAndSumOfDivisors(num);
    for (int i = 100; i < num; i++) {        
        if (numbers_sum_of_divisors[i] > (num - 1)) {
            continue;
        }
        if (numbers_sum_of_divisors[numbers_sum_of_divisors[i]] == i && numbers_sum_of_divisors[i] != i) {
            friendly_numbers[i] = numbers_sum_of_divisors[i];
        }
    }
    for (const auto& [key, value] : friendly_numbers) {
        if (key == value) {
            friendly_numbers.erase(key);
        }
        friendly_numbers.erase(value);
    }
    return friendly_numbers;
}

ostream& operator<<(ostream& out,const map<int, int>& paras) {
    bool is_first = true;
    for (const auto& [key, value] : paras) {
        if (is_first) {
            out << key << " & " << value;
            is_first = false;
        }
        else {
            out << ", " << key << " & " << value;
        }
    }
    return out;
}

int main() {
    cout << "Friendly Numbers: " << endl;    
        LogDuration lg;
        map<int, int> friendly_numbers;
        {
            friendly_numbers = FinderFriendlyNumber(mil);
        }
        cout << friendly_numbers;      
}