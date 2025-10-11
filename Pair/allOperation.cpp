#include<bits/stdc++.h> 
using namespace std;

int main(){
    pair<int,string> p1(10, "abc");      // Changed 'abc' to "abc"
    pair<int,string> p2(5, "hello");     // Changed 'hello' to "hello"

    p1.swap(p2);

    cout << p1.second;  // Output: hello
    return 0;
}