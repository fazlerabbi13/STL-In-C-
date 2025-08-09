#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, string> mm;
    
    // Inserting key-value pairs
    mm.insert({1, "Geeks"});
    mm.insert({2, "For"});
    mm.insert({1, "C++"});

    for(auto x: mm)
        cout << x.first << ": " << x.second
        << endl;
    return 0;
}