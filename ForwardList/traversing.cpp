#include <bits/stdc++.h>
using namespace std;

int main() {
    forward_list<int> fl = {1, 5, 3, 4};
    
    // Traversing using range-based for loop
    for(auto i : fl)
        cout << i << " ";
    cout << endl;
    
    return 0;
}