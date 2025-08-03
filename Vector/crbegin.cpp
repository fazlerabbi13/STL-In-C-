#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 2, 4};

    // Print vector in reverse order
    for (auto it = v.crbegin(); it != v.crend(); ++it)
        cout << *it << " ";
    return 0;
}