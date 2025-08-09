#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, string> mm = {{1, "Geeks"},
                     {2, "For"}, {1, "C++"}};
                     
                     
    // Updating 2nd element value
    auto it = next(mm.begin(), 1);
    it->second = "Java";
    
    for (auto x: mm)
        cout << x.first << ": " << x.second
        << endl;
    return 0;
}