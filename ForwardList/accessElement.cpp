#include <bits/stdc++.h>
using namespace std;

int main() {
    forward_list<int> fl = {1, 5, 3, 4};

    // Access the first element
    cout << fl.front() << endl;
    
    // Access third element
    auto it = next(fl.begin(), 2);
    cout << *it;
    return 0;
}