#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, string> um =
    {{1, "Geeks"}, {2, "For"}, {3, "C++"}};

    // Traversing using iterators with loop
    for(auto it = um.begin(); it != um.end(); it++)
        cout << it->first << ": " << it->second
        << endl;
    return 0;
}