#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;

    // Inserting elements
    ms.insert(5);
    ms.insert(3);
    ms.insert(3);
    ms.insert(1);
    
    for(auto i : ms)
        cout << i << " ";
    return 0;
}