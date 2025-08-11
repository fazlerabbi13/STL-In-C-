#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_multimap<int, string> umm =
    {{1, "Geeks"},{2, "For"},{1, "C++"}};

    // Traversing using iterators with loop
    for(auto it = umm.begin(); it != umm.end(); it++)
        cout << it->first << ": " << it->second
        << endl;
    return 0;
}