#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {1, 4, 2, 3, 5};

    // Finding 3
    auto it = s.find(3);
    
    if (it != s.end()) cout << *it;
    else cout << "Element not Found!";
    return 0;
}