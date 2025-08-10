#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_multiset<int> ums =
                    {5, 1, 3, 2, 4, 1};

    // Accessing element using iterator
    auto it = next(ums.begin(), 2);
    cout << *it;
    return 0;
}