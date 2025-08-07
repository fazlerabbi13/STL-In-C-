#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, string> um =
    {{1, "Geeks"}, {2, "For"}, {3, "C++"}};
    
    // Finding element with key 2
    auto it = um.find(2);
    
    if (it != um.end())
        cout << it->first << ": " << it->second;
    else cout << "Not Found";
    return 0;
}