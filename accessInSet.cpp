#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {1, 4, 2, 3, 5};

    // Accessing first element
    auto it1 = s.begin();
    
    // Accessing third element
    auto it2 = next(it1, 2);
    
    cout << *it1 << " " << *it2;
    return 0;
}