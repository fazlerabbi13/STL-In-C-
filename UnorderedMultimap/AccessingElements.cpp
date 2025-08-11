#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_multimap<int, string> umm =
    {{2, "For"}, {3, "C++"}, {2, "Geeks"}};
    
    // Find 2nd element
    auto it = next(umm.begin(), 1);
    
    if (it != umm.end())
        cout << it->first << ": " <<
        it->second;
    else
        cout << "Element not found!";
    return 0;
}