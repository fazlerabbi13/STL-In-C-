#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms = {5, 3, 3, 1};
    
    // Delete first element
    ms.erase(ms.begin());
    
    // Deleting all 3s
    ms.erase(3);
    
    for (auto x: ms) cout << x << " ";
    return 0;
}