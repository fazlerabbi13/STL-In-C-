#include <bits/stdc++.h>
using namespace std;
int main() {
    pair<int, string> p = {1, "Geeks"};

    // Variables to store extracted values
    int a;
    string s;

    // Extracting values using tie()
    tie(a, s) = p;

    cout << "First value: " << a << endl;
    cout << "Second value: " << s;
    return 0;
}