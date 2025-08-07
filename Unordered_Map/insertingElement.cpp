#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, string> um;
    
    // Insert elements using square brackets
    um[1] = "Geeks";
    
    // Insert elements using insert() method
    um.insert({2, "For"});
    um.insert({3, "C++"});

    for (auto i : um) 
        cout << i.first << ": " << i.second
        << endl;
    return 0;
}