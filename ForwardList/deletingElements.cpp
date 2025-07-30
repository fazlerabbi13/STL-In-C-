#include <bits/stdc++.h>
using namespace std;

int main() {
    forward_list<int> fl = {1, 5, 3, 4};

    // Delete first element
    fl.pop_front();
    
    // Delete third element
    auto it = fl.begin();
    advance(it, 1);
    fl.erase_after(it);
    
    for (auto x: fl) cout << x << " ";
    return 0;
}