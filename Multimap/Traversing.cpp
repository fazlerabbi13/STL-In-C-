#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, string> mm = {{1, "Geeks"},
                     {2, "For"}, {1, "C++"}};
    
    // Traverse multimap
    for(auto it = mm.begin(); it != mm.end(); it++)
        cout << it->first << " " << it->second
        << "\n";
    return 0;
}