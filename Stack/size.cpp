// C++ Program to illustrate how to find the size of the
// stack
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Creating a stack
    stack<int> myStack;

    // Pushing elements into  the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);

    // Finding the size of the stack using size() function
    cout << "Size of the stack is: " << myStack.size()
         << endl;
    return 0;
}