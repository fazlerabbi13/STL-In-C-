#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    // Create a forward_list
    forward_list<int> fl = {10, 20, 30, 40};

    // Display initial list
    cout << "Initial list: ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // Assign
    fl.assign({1, 2, 3});
    cout << "After assign: ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // Push front
    fl.push_front(0);
    cout << "After push_front(0): ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // Pop front
    fl.pop_front();
    cout << "After pop_front(): ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // Insert after
    auto it = fl.before_begin(); // before_begin() is used for first element
    fl.insert_after(it, 99);
    cout << "After insert_after(before_begin, 99): ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // Erase after
    it = fl.before_begin();
    fl.erase_after(it);
    cout << "After erase_after(before_begin): ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // emplace_front
    fl.emplace_front(100);
    cout << "After emplace_front(100): ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // emplace_after
    it = fl.before_begin();
    fl.emplace_after(it, 200);
    cout << "After emplace_after(before_begin, 200): ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // remove
    fl.remove(3); // remove all 3s
    cout << "After remove(3): ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // remove_if
    fl.remove_if([](int x) { return x > 50; });
    cout << "After remove_if(x > 50): ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // reverse
    fl.reverse();
    cout << "After reverse(): ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // sort
    fl.sort();
    cout << "After sort(): ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // merge
    forward_list<int> fl2 = {1, 4, 6};
    fl.merge(fl2);
    cout << "After merge with {1, 4, 6}: ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // unique
    fl.unique();
    cout << "After unique(): ";
    for (int val : fl) cout << val << " ";
    cout << endl;

    // clear
    fl.clear();
    cout << "After clear(): ";
    cout << (fl.empty() ? "List is empty" : "List is not empty") << endl;

    return 0;
}
