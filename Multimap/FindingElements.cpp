#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, string> mm = {{1, "Geeks"},
                     {2, "For"}, {1, "C++"}};
    
    // Find element with key 2
    auto it = mm.find(2);
    
    cout << it->first << ": " << it->second;
    return 0;
}