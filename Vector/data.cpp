// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> v = {1, 2, 3, 4};

//     // Accessing first element of vector v's
//   	// internal array
//     cout << *v.data();
  
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};

    int* arr = v.data();

    // Accessing all elements of vector
    for (int i = 0; i < v.size(); i++)
        cout << *(arr + i) << " ";
    return 0;
}