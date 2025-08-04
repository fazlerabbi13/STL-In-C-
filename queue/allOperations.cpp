#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // push() - adds elements to the back
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "After push(10, 20, 30): ";
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // front() - accesses the front element
    cout << "Front element: " << q.front() << endl;

    // back() - accesses the back element
    cout << "Back element: " << q.back() << endl;

    // size() - returns the number of elements
    cout << "Size of queue: " << q.size() << endl;

    // pop() - removes the front element
    q.pop();
    cout << "After pop(): ";
    temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // empty() - checks if queue is empty
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    // emplace() - construct element in-place at the back
    q.emplace(40);
    q.emplace(50);
    cout << "After emplace(40, 50): ";
    temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Swapping two queues
    queue<int> q2;
    q2.push(100);
    q2.push(200);

    cout << "\nBefore swap:\n";
    cout << "q: ";
    temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    cout << "\nq2: ";
    temp = q2;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    q.swap(q2);

    cout << "\n\nAfter swap:\n";
    cout << "q: ";
    temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    cout << "\nq2: ";
    temp = q2;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
