#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // Include this header for std::function
using namespace std;

// Function to determine the best ordering for minimum height binary search tree
// It sorts the array and recursively chooses the middle element as the root
vector<int> getOptimalOrder(vector<int>& items) {
    sort(items.begin(), items.end()); // Sort the items
    vector<int> result;
    // Helper function to insert elements in a balanced way
    function<void(int, int)> insertBalanced = [&](int start, int end) {
        if (start > end) return;  // Base case: no elements to insert
        int mid = (start + end) / 2;  // Find the middle element
        result.push_back(items[mid]); // Add the middle element to the result
        insertBalanced(start, mid - 1); // Recursively insert left half
        insertBalanced(mid + 1, end);   // Recursively insert right half
    };
    insertBalanced(0, items.size() - 1); // Start with the full range
    return result;
}

int main() {
    // Create a tree object
    TreeType<int> tree;

    // Print if the tree is empty or not
    cout << "Tree is " << (tree.IsEmpty() ? "empty" : "not empty") << endl;

    // Insert ten items
    vector<int> values = {4, 9, 2, 7, 3, 11, 17, 0, 5, 1};
    for (int val : values) {
        tree.InsertItem(val); // Insert each value into the tree
    }

    // Print if the tree is empty or not
    cout << "Tree is " << (tree.IsEmpty() ? "empty" : "not empty") << endl;

    // Print the length of the tree
    cout << "Length of the tree: " << tree.LengthIs() << endl;

    // Retrieve 9 and print whether found or not
    int item = 9;
    bool found;
    tree.RetrieveItem(item, found);
    cout << "Item " << item << " is " << (found ? "found" : "not found") << endl;

    // Retrieve 13 and print whether found or not
    item = 13;
    tree.RetrieveItem(item, found);
    cout << "Item " << item << " is " << (found ? "found" : "not found") << endl;

    // Print the elements in the tree (inorder)
    cout << "In-order traversal: ";
    tree.ResetTree(IN_ORDER); // Reset the tree to in-order traversal
    bool finished = false;
    while (!finished) {
        tree.GetNextItem(item, IN_ORDER, finished); // Get the next item in in-order
        if (!finished) cout << item << " ";
    }
    cout << endl;

    // Print the elements in the tree (preorder)
    cout << "Pre-order traversal: ";
    tree.ResetTree(PRE_ORDER); // Reset the tree to pre-order traversal
    finished = false;
    while (!finished) {
        tree.GetNextItem(item, PRE_ORDER, finished); // Get the next item in pre-order
        if (!finished) cout << item << " ";
    }
    cout << endl;

    // Print the elements in the tree (postorder)
    cout << "Post-order traversal: ";
    tree.ResetTree(POST_ORDER); // Reset the tree to post-order traversal
    finished = false;
    while (!finished) {
        tree.GetNextItem(item, POST_ORDER, finished); // Get the next item in post-order
        if (!finished) cout << item << " ";
    }
    cout << endl;

    // Make the tree empty
    tree.MakeEmpty();
    cout << "Tree is " << (tree.IsEmpty() ? "empty" : "not empty") << endl;

    // Given a sequence of integers, determine the best ordering of the integers to insert them into a binary search tree
    values = {11, 9, 4, 2, 7, 3, 17, 0, 5, 1};
    vector<int> optimalOrder = getOptimalOrder(values);

    // Insert items in the optimal order
    for (int val : optimalOrder) {
        tree.InsertItem(val);
    }

    // Print the elements in the tree (inorder)
    cout << "In-order traversal after optimal insertion: ";
    tree.ResetTree(IN_ORDER); // Reset the tree to in-order traversal
    finished = false;
    while (!finished) {
        tree.GetNextItem(item, IN_ORDER, finished); // Get the next item in in-order
        if (!finished) cout << item << " ";
    }
    cout << endl;

    return 0;
}
