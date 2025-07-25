#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {5, 1, 4, 3, 2};
    
    // Traversing using range based for loop
    for(auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    return 0;
}