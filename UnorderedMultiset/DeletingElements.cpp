#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_multiset<int> ums =
                       {5, 1, 3, 2, 4, 1};

    // Delete all occurrences of element 1
    ums.erase(1);
    
    // Delete 2 using iterator
    ums.erase(ums.find(2));
    
   for (auto x: ums) cout << x << " ";
    return 0;
}