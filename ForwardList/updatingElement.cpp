#include <bits/stdc++.h>
using namespace std;

int main() {
    forward_list<int> fl = {1, 5, 3, 4};

    // Updating first element
    fl.front() = 111;
    cout << fl.front() << endl;
    
    // Updating third element
    auto it = next(fl.begin(), 2);
    *it = 333;
    cout << *it;
    return 0;
}