#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_multiset<int> ums =
                     {5, 1, 3, 4, 1};
    
    // Finding 3
    auto it = ums.find(3);
    
    if (it != ums.end()) cout << *it;
    else cout << "Element not Found!";
    return 0;
}