#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms = {5, 3, 3, 1};

    // Finding 3
    auto it = ms.find(3);
    
    if (it != ms.end()) cout << *it;
    else cout << "Not Found!";

    return 0;
}