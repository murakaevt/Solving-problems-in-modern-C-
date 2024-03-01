#include<iostream>
#include <windows.h>

using namespace std;

int Function(int num){
int sum=0;
    for(int i = num; i != 0; i--){
        if(i%3==0 || i%5==0){
sum+=i;
        }
    }
    return sum;
}

int main(){
    int num=0;
    cout << "Please, enter the number!"<< endl;
    cin >> num;
    
    cout << "sum: "<< Function(num);
Sleep(5000);
}