#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    // push_back
    dq.push_back(10);
    dq.push_back(20);
    cout << "After push_back(10, 20): ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // push_front
    dq.push_front(5);
    cout << "After push_front(5): ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // pop_back
    dq.pop_back();
    cout << "After pop_back(): ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // pop_front
    dq.pop_front();
    cout << "After pop_front(): ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // assign
    dq.assign(4, 7); // 4 elements with value 7
    cout << "After assign(4, 7): ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // insert
    dq.insert(dq.begin() + 2, 99);
    cout << "After insert at position 2: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // emplace
    dq.emplace(dq.begin() + 1, 88);
    cout << "After emplace at position 1: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // emplace_front
    dq.emplace_front(55);
    cout << "After emplace_front(55): ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // emplace_back
    dq.emplace_back(66);
    cout << "After emplace_back(66): ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // erase
    dq.erase(dq.begin() + 2);
    cout << "After erase at position 2: ";
    for (int x : dq) cout << x << " ";
    cout << endl;

    // size
    cout << "Size: " << dq.size() << endl;

    // at()
    cout << "Element at index 1: " << dq.at(1) << endl;

    // front & back
    cout << "Front: " << dq.front() << ", Back: " << dq.back() << endl;

    // clear
    dq.clear();
    cout << "After clear(): ";
    cout << (dq.empty() ? "Deque is empty" : "Deque is not empty") << endl;

    return 0;
}
