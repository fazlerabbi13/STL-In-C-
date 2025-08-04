#include <iostream>
#include <utility>  // for pair
#include <tuple>    // for tie
using namespace std;

int main() {
    // Creating pairs
    pair<int, string> p1 = {1, "One"};
    pair<int, string> p2(2, "Two");
    pair<int, string> p3;
    p3.first = 3;
    p3.second = "Three";

    cout << "Pairs:\n";
    cout << "p1: (" << p1.first << ", " << p1.second << ")\n";
    cout << "p2: (" << p2.first << ", " << p2.second << ")\n";
    cout << "p3: (" << p3.first << ", " << p3.second << ")\n";

    // Using make_pair
    pair<char, double> p4 = make_pair('A', 3.14);
    cout << "\nUsing make_pair: (" << p4.first << ", " << p4.second << ")\n";

    // Nested pair
    pair<int, pair<string, float>> p5 = {5, {"Five", 5.5}};
    cout << "\nNested pair: (" << p5.first << ", (" << p5.second.first << ", " << p5.second.second << "))\n";

    // Comparing pairs
    pair<int, int> a = {1, 2};
    pair<int, int> b = {1, 3};
    cout << "\nComparison:\n";
    cout << "a < b: " << (a < b) << endl;
    cout << "a == b: " << (a == b) << endl;

    // Swapping pairs
    cout << "\nBefore swap:\n";
    cout << "a: (" << a.first << ", " << a.second << ")\n";
    cout << "b: (" << b.first << ", " << b.second << ")\n";

    swap(a, b);
    cout << "After swap:\n";
    cout << "a: (" << a.first << ", " << a.second << ")\n";
    cout << "b: (" << b.first << ", " << b.second << ")\n";

    // tie() to unpack pair
    int id;
    string name;
    pair<int, string> student = {47014, "Fazle Rabbi"};
    tie(id, name) = student;
    cout << "\nUnpacked using tie(): ID = " << id << ", Name = " << name << endl;

    return 0;
}
