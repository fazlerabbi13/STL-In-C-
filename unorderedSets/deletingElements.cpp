#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> us = {1, 2, 3, 4, 5};

    // Delete element by value
    us.erase(5);
    
    // Delete element by position
    us.erase(us.begin());
    
    for(auto x : us)
        cout << x << " ";
    return 0;
}