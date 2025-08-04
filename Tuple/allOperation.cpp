#include <iostream>
#include <tuple>
#include <string>
#include <utility>
using namespace std;

int main() {
    // Creating tuples
    tuple<int, string, float> t1(1, "One", 1.1f);
    tuple<int, string, float> t2 = make_tuple(2, "Two", 2.2f);

    // Accessing elements using get<>
    cout << "t1: (" 
         << get<0>(t1) << ", " 
         << get<1>(t1) << ", " 
         << get<2>(t1) << ")\n";

    cout << "t2: (" 
         << get<0>(t2) << ", " 
         << get<1>(t2) << ", " 
         << get<2>(t2) << ")\n";

    // Modifying elements
    get<1>(t1) = "One Modified";
    cout << "\nModified t1: (" 
         << get<0>(t1) << ", " 
         << get<1>(t1) << ", " 
         << get<2>(t1) << ")\n";

    // tie() for unpacking
    int id;
    string name;
    float value;
    tie(id, name, value) = t2;
    cout << "\nUnpacked t2 using tie(): " << id << ", " << name << ", " << value << endl;

    // ignore with tie()
    tie(ignore, name, value) = t2;
    cout << "Ignoring first element: " << name << ", " << value << endl;

    // tuple_size
    cout << "\nSize of t1: " << tuple_size<decltype(t1)>::value << endl;

    // tuple_element
    tuple_element<1, decltype(t1)>::type second_element = get<1>(t1);
    cout << "Type of 2nd element in t1: " << second_element << endl;

    // swap
    cout << "\nBefore swap:\n";
    cout << "t1: " << get<0>(t1) << ", " << get<1>(t1) << ", " << get<2>(t1) << endl;
    cout << "t2: " << get<0>(t2) << ", " << get<1>(t2) << ", " << get<2>(t2) << endl;

    swap(t1, t2);

    cout << "\nAfter swap:\n";
    cout << "t1: " << get<0>(t1) << ", " << get<1>(t1) << ", " << get<2>(t1) << endl;
    cout << "t2: " << get<0>(t2) << ", " << get<1>(t2) << ", " << get<2>(t2) << endl;

    // Comparison operators
    tuple<int, int> a = make_tuple(1, 2);
    tuple<int, int> b = make_tuple(1, 3);
    cout << "\nComparison:\n";
    cout << "a < b: " << (a < b) << endl;
    cout << "a == b: " << (a == b) << endl;

    return 0;
}
