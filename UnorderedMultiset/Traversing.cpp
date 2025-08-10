#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_multiset<int> ums =
                    {5, 1, 3, 4, 1};
    
    // Using range-based for loop
    for(auto x : ums)
        cout << x << " ";
    cout << "\n";
    
    return 0;
}