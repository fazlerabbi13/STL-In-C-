#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms = {5, 3, 3, 1};

    // Access first element
    auto it1 = ms.begin();
    cout << *it1 << " ";
    
    // Access third element
    auto it2 = next(it1, 2);
    cout << *it2;
    return 0;
}