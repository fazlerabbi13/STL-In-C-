// File name: pd.cpp

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Max heap (default)
    priority_queue<int> pq;

    // push()
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(40);
    cout << "Max-Heap (default): ";
    priority_queue<int> temp = pq;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // top()
    cout << "Top element: " << pq.top() << endl;

    // pop()
    pq.pop();
    cout << "After pop(): ";
    temp = pq;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // size() and empty()
    cout << "Size: " << pq.size() << endl;
    cout << "Is empty? " << (pq.empty() ? "Yes" : "No") << endl;

    // emplace()
    pq.emplace(70);
    cout << "After emplace(70): ";
    temp = pq;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Swapping two priority_queues
    priority_queue<int> pq2;
    pq2.push(1);
    pq2.push(2);

    cout << "\nBefore swap:\n";
    cout << "pq: ";
    temp = pq;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << "\npq2: ";
    temp = pq2;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

    pq.swap(pq2);

    cout << "\n\nAfter swap:\n";
    cout << "pq: ";
    temp = pq;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << "\npq2: ";
    temp = pq2;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

    // Min heap using greater<int>
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(50);
    minHeap.push(10);
    minHeap.push(30);

    cout << "\n\nMin-Heap: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }

    return 0;
}
