#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, string> um =
    {{1, "Geeks"}, {2, "For"}, {3, "C++"}};

    // Access value associated with key 2
    // using [] operator
    cout << um[2] << endl;
    
    // Access value associated with key 1
    // using at() function
    cout << um.at(1);
    return 0;
}