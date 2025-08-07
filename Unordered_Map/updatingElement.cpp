#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, string> um =
    {{1, "Geeks"}, {2, "For"}, {3, "C++"}};

    // Updating value associated with key 2
    // using [] operator
    um[2] = "By";
    cout << um[2] << endl;
    
    // Updating value associated with key 1
    //using at() function
    // um.at(1) = "Tips";
    // cout << um.at(1);
    return 0;
}