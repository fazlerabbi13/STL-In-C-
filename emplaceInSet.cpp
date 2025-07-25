#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {1, 4, 2};
    
    // Insert elements into set
    s.insert(5);
    s.emplace(3);
    s.insert(5);
    
    for (auto x: s) cout << x << " ";
    return 0;
}