#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_multimap<int, string> umm;
    
    // Insert elements using insert()
    umm.insert({2, "For"});
    umm.insert({3, "C++"});
    umm.insert({2, "Geeks"});
    
    for (auto x : umm) 
        cout << x.first << ": "
        << x.second << endl;
    return 0;
}