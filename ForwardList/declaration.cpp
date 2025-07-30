#include <bits/stdc++.h>
using namespace std;

void printFL(forward_list<int>& fl) {
    for (auto i : fl)
        cout << i << " ";
    cout << '\n';
}

int main() {
    
    // Creating an empty forward_list
    forward_list<int> fl1;

    // Creating a forward_list with
    // default value
    // forward_list<int> fl2(3, 4);
    
    // Creating a forward_list from an
    // initializer list
    // forward_list<int> fl3 = {1, 5, 3, 4};
    
    // printFL(fl2);
    // printFL(fl3);
    return 0;
}