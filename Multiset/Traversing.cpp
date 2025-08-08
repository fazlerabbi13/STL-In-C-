#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms = {5, 3, 3, 1};
    
    // Traversing using range-based loop
    for(auto i : ms)
        cout << i << " ";
    return 0;
}