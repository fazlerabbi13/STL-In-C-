#include<bits/stdc++.h> 
using namespace std;

int main(){
    // pair<int,string> p1(10, "abc");      // Changed 'abc' to "abc"
    // pair<int,string> p2(5, "hello"); 
    // Changed 'hello' to "hello"

    pair < int , string > myPair = {2,"hello woeld"};

    auto [num, text] = myPair;

    cout << "number: " << num << "\n";
    cout << "number: " << text << "\n";

    // cout << p1.first << " : " << p1.second <<"\n";
    // cout << p2.first << " : "<< p2.second <<"\n";

    // p1.swap(p2);

    // cout << p1.second;  // Output: hello
    return 0;
}