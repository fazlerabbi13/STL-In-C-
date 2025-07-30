#include <bits/stdc++.h>
using namespace std;

int main() {
    forward_list<int> fl = {5, 4};

    // Inserting Element at front
    fl.push_front(1);
    
    // Insert 3 after the second element
    auto it = fl.begin();
    advance(it, 1);
    fl.insert_after(it, 3);
    
    for (auto x: fl) cout << x << " ";
    return 0;
}