// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v;

//     // Max size of vector
//     cout << v.max_size();
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    // Find max_size() for an empty vector
    cout << "Empty vector: " << v.max_size() << endl;

    // Add some elements to the vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "After adding elements: "<< v.max_size()
      	<< endl;

    // Reserve additional capacity
    v.reserve(100);
    cout << "After reserving capacity: " << v.max_size();

    return 0;
}