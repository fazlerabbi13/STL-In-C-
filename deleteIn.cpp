#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {1, 4, 2, 3, 5};
    
    // Deleting elements by value
    s.erase(5);
    
    // Deleting first element by iterator
    s.erase(s.begin());
    
    for (auto x: s) cout << x << " ";
    return 0;
}