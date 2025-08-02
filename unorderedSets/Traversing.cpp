#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> us = {1, 2, 3, 4, 5};
    
    // Using iterator in loop
    for(auto it = us.begin(); it != us.end(); it++)
        cout << *it << " ";
    return 0;
}