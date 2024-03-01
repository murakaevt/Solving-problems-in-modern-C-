#include <iostream>
#include <windows.h>

using namespace std;

int Function(int first, int second){
    int minimum = min(first, second);
    if(minimum == first && second % first == 0){
    return first;
}
if(minimum == second && first % second == 0){
    return second;
}
for(int i = minimum; i != 0; i--){
    if(first % i == 0 && second % i == 0){
        return i;
    }
    continue;
}
    return 1;
}

int main(){
    u_int first, second;
    cout << "Enter two numbers:" << endl;
    cin >> first >> second;
cout<< "Answer: "<< Function(first, second);
Sleep(5000);
}
