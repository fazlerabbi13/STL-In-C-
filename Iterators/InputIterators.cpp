// C++ program to demonstrate input iterator
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = { 1, 2, 3, 4, 5 };

    // Declaring an iterator
    vector<int>::iterator i1;

    for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
        // Accessing elements using iterator
        cout << (*i1) << " ";
    }
    return 0;
}