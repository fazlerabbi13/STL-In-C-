#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m = {{1, "Geeks"},
             {2, "For"}, {3, "Geeks"}};

    // Accessing elements
    cout << m[1] << endl;
    cout << m.at(2);

    return 0;
}