#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool is_prime(int const num)
{
if (num <= 3) { return num > 1; }
else if (num % 2 == 0 || num % 3 == 0)
{
return false;
}
else
{
for (int i = 5; i * i <= num; i += 6)
{
if (num % i == 0 || num % (i + 2) == 0)
{
return false;
}
}
return true;
}
}

vector<pair<int, int>> PrimeNumbersThatDifferBySix(int const num){
vector<int> prime_numbers;
for(int i = num; i > 0; i--){
    if(is_prime(i)){
prime_numbers.push_back(i);
    }
}
vector<pair<int, int>> paras;
for(size_t a = 0; a < prime_numbers.size()-1; a++){
    for(int b = a+1; b < b+5; b++){
    if(prime_numbers[a]-prime_numbers[b]==6){
       paras.push_back({prime_numbers[b], prime_numbers[a]});
    }    
    if(prime_numbers[b] == prime_numbers[prime_numbers.size()-1]){
        break;
    }
    }
}
return paras;
}

ostream& operator<<(ostream& out, const pair<int, int>& para){
out << para.first << " & " << para.second;
return out;
}

int main() {
int num;
cout << "Please, enter the number: ";
cin >> num;
vector<pair<int, int>> parapara = PrimeNumbersThatDifferBySix(num);
reverse(parapara.begin(), parapara.end());
cout << "result: "; 
for(const auto& par : parapara){
    cout << par << "   ";
}
}