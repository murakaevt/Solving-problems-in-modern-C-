#include <iostream>
#include <vector>
#include <utility>
#include <numeric>
#include <algorithm>
#include <windows.h>
#include <map>
#include <iterator>
#include <chrono>
#include <future>

using namespace std;
using namespace chrono;
static const int mil = 1000001;
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
template<typename RandomIt>
void Function(RandomIt begin, RandomIt end, vector<int>& vec) {

    for (auto it = begin; it != end; it++) {
        vector<int> dividers;
        int position = distance(vec.begin(), it);
        int div = distance(vec.begin(), it) / 2;
        if (position < 2) {
            continue;
        }
        for (int j = div; j > 0; j--) {
            if (position % j == 0) {
                dividers.push_back(j);
            }
        }
        int sum_of_dividers = accumulate(dividers.begin(), dividers.end(), 0);
        *it = sum_of_dividers;
    }
}

vector<int> FinderNumbersAndSumOfDivisors(const int num) {
    vector<int> numbers_sum_of_divisors(num);
    int part_length = numbers_sum_of_divisors.size() / 6;
    auto first_part_end_it = numbers_sum_of_divisors.begin() + part_length;
    auto second_part_end_it = numbers_sum_of_divisors.begin() + (part_length * 2);
    auto third_part_end_it = numbers_sum_of_divisors.begin() + (part_length * 3);
    auto fourth_part_end_it = numbers_sum_of_divisors.begin() + (part_length * 4);
    auto fifth_part_end_it = numbers_sum_of_divisors.begin() + (part_length * 5);

    auto first_part = async([&] {Function(numbers_sum_of_divisors.begin(), first_part_end_it, numbers_sum_of_divisors);});
    auto second_part = async([&] {Function(first_part_end_it, second_part_end_it, numbers_sum_of_divisors);});
    auto third_part = async([&] {Function(second_part_end_it, third_part_end_it, numbers_sum_of_divisors);});
    auto fourth_part = async([&] {Function(third_part_end_it, fourth_part_end_it, numbers_sum_of_divisors);});
    auto fifth_part = async([&] {Function(fourth_part_end_it, fifth_part_end_it, numbers_sum_of_divisors);});
    auto sixth_part = async([&] {Function(fifth_part_end_it, numbers_sum_of_divisors.end(), numbers_sum_of_divisors);});

    first_part.get();
    second_part.get();
    third_part.get();
    fourth_part.get();
    fifth_part.get();
    sixth_part.get();

    return numbers_sum_of_divisors;
}

template<typename RandomIt>
void Function2(RandomIt begin, RandomIt end, vector<int>& vec, map<int, int> mapy, const int num) {
    for (auto it = begin; it != end; it++) {
        int position = distance(vec.begin(), it);
        if (*it > (num - 1)) {
            continue;
        }
        if (vec[*it] == position && *it != position) {
            mapy[position] = *it;
        }
    }
}

map<int, int> FinderFriendlyNumber(const int num) {
    map<int, int> friendly_numbers;
    vector<int> numbers_sum_of_divisors = FinderNumbersAndSumOfDivisors(num);

    int part_length = numbers_sum_of_divisors.size() / 6;
    auto first_part_end_it = numbers_sum_of_divisors.begin() + part_length;
    auto second_part_end_it = numbers_sum_of_divisors.begin() + (part_length * 2);
    auto third_part_end_it = numbers_sum_of_divisors.begin() + (part_length * 3);
    auto fourth_part_end_it = numbers_sum_of_divisors.begin() + (part_length * 4);
    auto fifth_part_end_it = numbers_sum_of_divisors.begin() + (part_length * 5);

    auto first_part = async([&] {Function2(numbers_sum_of_divisors.begin(), first_part_end_it, numbers_sum_of_divisors, friendly_numbers, num);});
    auto second_part = async([&] {Function2(first_part_end_it, second_part_end_it, numbers_sum_of_divisors, friendly_numbers, num);});
    auto third_part = async([&] {Function2(second_part_end_it, third_part_end_it, numbers_sum_of_divisors, friendly_numbers, num);});
    auto fourth_part = async([&] {Function2(third_part_end_it, fourth_part_end_it, numbers_sum_of_divisors, friendly_numbers, num);});
    auto fifth_part = async([&] {Function2(fourth_part_end_it, fifth_part_end_it, numbers_sum_of_divisors, friendly_numbers, num);});
    auto sixth_part = async([&] {Function2(fifth_part_end_it, numbers_sum_of_divisors.end(), numbers_sum_of_divisors, friendly_numbers, num);});

    first_part.get();
    second_part.get();
    third_part.get();
    fourth_part.get();
    fifth_part.get();
    sixth_part.get();

    for (const auto& [key, value] : friendly_numbers) {
        if (key == value) {
            friendly_numbers.erase(key);
        }
        friendly_numbers.erase(value);
    }
    return friendly_numbers;
}

ostream& operator<<(ostream& out, const map<int, int>& paras) {
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
    map<int, int> friendly_numbers;
    {
        LogDuration lg;
        friendly_numbers = FinderFriendlyNumber(mil);
    }
    cout << friendly_numbers;
}