#include <iostream>
using namespace std;

// Function to calculate the power of a number
// Parameters: n -> base, p -> exponent
// Returns: n raised to the power of p
int power(int n, int p) {
    // Base case: if the exponent is 0, return 1
    if (p == 0) {
        return 1;
    }
    // Recursive case: multiply n by itself p-1 times
    // until the exponent becomes 0
    else {
        return n * power(n, p - 1);
    }
}

// Function to find the nth term of the series: 1, 2, 3, 4, 5, ...
// Parameters: n -> term number
// Returns: nth term of the series
int findNthTerm(int n) {
    // Base case: if n is 1, return 1
    if (n == 1) {
        return 1;
    }
    // Recursive case: nth term is equal to n plus (n-1)th term
    else {
        return n + findNthTerm(n - 1);
    }
}

// Function to find the summation of the series: 1 + 2 + 3 + ... + n
// Parameters: n -> number of terms in the series
// Returns: summation of the series
int findSum(int n) {
    // Base case: if n is 1, return 1
    if (n == 1) {
        return 1;
    }
    // Recursive case: summation is equal to n plus summation of (n-1) terms
    else {
        return n + findSum(n - 1);
    }
}

// Function to find the summation of the series: 1^1 + 2^2 + 3^3 + ... + n^n
// Parameters: n -> number of terms in the series
// Returns: summation of the series
int findPowerSum(int n) {
    // Base case: if n is 1, return 1
    if (n == 1) {
        return 1;
    }
    // Recursive case: summation is equal to power of n plus summation of (n-1) terms
    else {
        return power(n, n) + findPowerSum(n - 1);
    }
}

// Function to find the maximum element in an array
// Parameters: nums[] -> array of integers, start -> starting index, end -> ending index
// Returns: maximum element in the array
int findMax(int nums[], int start, int end) {
    // Base case: if there is only one element in the array, return that element
    if (start == end) {
        return nums[start];
    }
    // Recursive case: compare the maximum of left and right subarrays
    int mid = (start + end) / 2;
    int maxLeft = findMax(nums, start, mid);
    int maxRight = findMax(nums, mid + 1, end);
    // Return the maximum of left and right subarrays
    return (maxLeft > maxRight) ? maxLeft : maxRight;
}

// Function to find the minimum element in an array
// Parameters: nums[] -> array of integers, start -> starting index, end -> ending index
// Returns: minimum element in the array
int findMin(int nums[], int start, int end) {
    // Base case: if there is only one element in the array, return that element
    if (start == end) {
        return nums[start];
    }
    // Recursive case: compare the minimum of left and right subarrays
    int mid = (start + end) / 2;
    int minLeft = findMin(nums, start, mid);
    int minRight = findMin(nums, mid + 1, end);
    // Return the minimum of left and right subarrays
    return (minLeft < minRight) ? minLeft : minRight;
}

int main() {
    int n, p;
    cout << "Enter the base: ";
    cin >> n;
    cout << "Enter the exponent: ";
    cin >> p;
    cout << "Power of " << n << " raised to " << p << " is: " << power(n, p) << endl;

    cout << "Enter the term number to find in the series: ";
    cin >> n;
    cout << "The " << n << "th term of the series is: " << findNthTerm(n) << endl;

    cout << "Enter the number of terms to find the summation: ";
    cin >> n;
    cout << "The summation of the series is: " << findSum(n) << endl;

    cout << "Enter the number of terms to find the power summation: ";
    cin >> n;
    cout << "The summation of the series is: " << findPowerSum(n) << endl;

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int nums[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> nums[i];
    }
    cout << "Maximum element in the array is: " << findMax(nums, 0, size - 1) << endl;
    cout << "Minimum element in the array is: " << findMin(nums, 0, size - 1) << endl;

    return 0;
}
