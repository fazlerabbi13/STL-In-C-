#include<iostream>
using namespace std;

template <typename T>
T area(T a, T b){
    T result = a * b;
    return result;
}

int main(){
    cout << area<int>(3, 7) <<"\n";
    return 0;
}