#include <bits/stdc++.h>
using namespace std;

int main() {
    forward_list<int> fl = {1, 5, 3, 4};

    // Finding 3
    auto it = find(fl.begin(), fl.end(), 3);
    
    if (it != fl.end()) cout << *it;
    else cout << "Element not Found";
    return 0;
}