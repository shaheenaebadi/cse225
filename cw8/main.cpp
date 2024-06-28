#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"
using namespace std;

int main()
{
    StackType<int> stack;
    int itemsToPush[] = { 'a', 'c', 'e', 'q', 'r', 'b' };
    char item;

    // Create a stack of integers
    if (stack.IsEmpty()) {
        cout << "Stack is Empty" << endl;
    }

    // Push six items
    for (int i = 0; i < 6; ++i) {
        stack.Push(itemsToPush[i]);
    }

    // Check if the stack is empty
    if (!stack.IsEmpty()) {
        cout << "Stack is not Empty" << endl;
    }

    // Print the values in the stack
    while (!stack.IsEmpty()) {
        item = stack.Top();
        stack.Pop();
        cout << static_cast<char>(item) << " ";
    }
    cout << endl;
// Push another item
    stack.Push('k');

    // Print the values in the stack
    if (!stack.IsEmpty()) {
        item = stack.Top();
        cout << "Top of the stack: " << static_cast<char>(item) << endl;
    }

    // Check if the stack is full
    if (stack.IsFull()) {
        cout << "Stack is full" << endl;
    }

    // Pop three items
    for (int i = 0; i < 3 && !stack.IsEmpty(); ++i) {
        stack.Pop();
    }

    // Print top item
    if (!stack.IsEmpty()) {
        item = stack.Top();
        cout << "Top of the stack after popping three items: " << static_cast<char>(item) << endl;
    }

    // Taking strings of Xs and Ys to check condition
    string input;
    cout << "Enter strings of Xs followed by Ys (must start with an X): ";
    cin >> input;
    StackType<char> charStack;
    for (char c : input) {
        charStack.Push(c);
    }
    bool conditionFulfilled = true;
    int xCount = 0;
    while (!charStack.IsEmpty() && charStack.Top() == 'Y') {
        charStack.Pop();
        xCount++;
    }
    while (!charStack.IsEmpty() && charStack.Top() == 'X') {
        charStack.Pop();
        xCount--;
    }
    if (!charStack.IsEmpty() || xCount != 0) {
        conditionFulfilled = false;
    }

    if (conditionFulfilled) {
        cout << "Condition Fulfilled" << endl;
    } else {
        cout << "Condition Not Fulfilled" << endl;
    }

    return 0;
}
