#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> us;
    
    // Insert elments using insert()
    us.insert(3);
    us.insert(1);
    us.insert(2);
    
    for(auto x : us)
        cout << x << " ";
    return 0;
}