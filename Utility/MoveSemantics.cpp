#include <iostream>
#include <memory>
#include <vector>
using namespace std;

vector<string> createAndInsert() {
    
    // Constructing a vector of
    // strings with an size of
    // 3 elements
    vector<string> vec;
    vec.reserve(3);

    // constructing & initializing
    // a string with "Hello"
    string str("Hello");

    // Inserting a copy of string
    // object
    vec.push_back(str);

    // Inserting a copy of an
    // temporary string object
    vec.push_back(str + str);

    // Again inserting a copy of
    // string object
    vec.push_back(str);

    return vec;
}

int main() {
    
    // Constructing an empty vector
    // of strings
    vector<string> vecString;

    // calling createAndInsert() and
    // initializing the local vecString
    // object
    vecString = createAndInsert();

    // Printing content of the vector
    for (const auto& s : vecString) {
        cout << s << '\n';
    }

    return 0;
}