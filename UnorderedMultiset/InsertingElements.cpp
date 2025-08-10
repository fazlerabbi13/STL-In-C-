#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_multiset<int> ums;
    
    // Insert elements using insert()
    ums.insert(5);
    ums.insert(1);
    ums.insert(3);
    ums.insert(1);
    ums.insert(2);
    ums.insert(4);
    
    for (auto x : ums) cout << x << ' ';
    return 0;
}