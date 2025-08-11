#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_multimap<int, string> umm =
    {{2, "For"}, {3, "C++"}, {2, "Geeks"}};
    
    // Searching for key '2' using find()
    auto it = umm.find(2);
    
    // Updating value
    it->second = "Java";
    
    for (auto x: umm)
        cout << x.first << ": " << x.second
        << endl;
    return 0;
}