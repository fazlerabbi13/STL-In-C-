#include<iostream>
using namespace std;

template <typename T>
T area(T a, T b){
    T result = a * b;
    return result;
}

int main(){
    cout << area<int>(3, 7) <<"\n";
    cout << area<double>(3.0, 7.0) <<"\n";
    cout << area<float>(3.2, 7.1) <<"\n";
    return 0;
}