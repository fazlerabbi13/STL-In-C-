#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Create an empty unordered_set
    unordered_set<int> us1;
  
    // Initialize an unordered_set using
    // using intializer list
    unordered_set<int> us2 = {1, 2, 3, 4, 5};
    
    for(auto x : us2)
        cout << x << " ";
    return 0;
}