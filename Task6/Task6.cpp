#include <iostream>
#include <vector>
#include <utility>
#include <numeric>
#include <algorithm>
#include <windows.h>

using namespace std;

vector<pair<int, int>> RedundantNumbers(int num){
vector<pair<int, int>> numbers_redundancy;
for(int i = num; i > 11; i--){
vector<int> dividers;
for(int j = i/2; j > 0; j--){
    if(i%j == 0){
        dividers.push_back(j);
    }
}
int sum_of_dividers = accumulate(dividers.begin(), dividers.end(), 0);
int amount_of_redundancy = sum_of_dividers - i;
if(amount_of_redundancy > 0){
numbers_redundancy.push_back({i, amount_of_redundancy});
}
}
reverse(numbers_redundancy.begin(), numbers_redundancy.end());
return numbers_redundancy;
}

ostream& operator<<(ostream& out, vector<pair<int, int>>& paras){
bool is_first = true;
for(const auto& para : paras){
    if(is_first){
        out << "number: " << para.first << " redundancy: " << para.second;
        is_first = false;
    }else {
    out << ", number: " << para.first << " redundancy: " << para.second;
    }
}
return out;
}

int main(){
    int num;
    cout << "Please, enter the number: " << endl;
    cin >> num;
   vector<pair<int, int>> paras =  RedundantNumbers(num);
cout << "result: " << paras;
Sleep(5000);
}