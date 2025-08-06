#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m = {{2, "For"}, {3, "Geeks"}};

    // Inserting a key value pair
    m.insert({1, "Geeks"});

    for (auto x: m)
        cout << x.first << " " << x.second
        << endl;
    return 0;
}