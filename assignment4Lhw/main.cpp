#include <iostream>
#include <cmath> // for pow function
using namespace std;

// Function to calculate the power of a number,task1
int power(int n, int p) {
    if (p == 0) {
        return 1;
    } else {
        return n * power(n, p - 1); // Recursion
    }
}

// Function to calculate the nth term of the 2+5+8+.. series,task2
int nth_term(int n) {
    if (n == 1) {
        return 2;
    } else {
        return 2 + 3 * (n - 1); // Formula calculation
    }
}

// Function to calculate the summation of the nth term of the 2+5+8+.. series,task3
int sum_of_series(int n) {
    if (n <= 0) { // Handle invalid input
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += nth_term(i);
    }
    return sum;
}

// Function for the summation of the 1+2+4+8+.. series,task4
int sumOfSeries(int n) {
    if (n == 1) {
        return 1;
    } else {
        return (1 * (1 - pow(2, n))) / (1 - 2); // Geometric series formula with diff =2
    }
}

// Function to find the maximum element in an array,task5
int findMax(int nums[], int start, int end) {
    if (start == end) {
        return nums[start];
    } else {
        int mid = start + (end - start) / 2; // (end-start)/2 =gives half length of array
        int max1 = findMax(nums, start, mid); // Recursion
        int max2 = findMax(nums, mid + 1, end); // Recursion
        return max(max1, max2);
    }
}

// Function to find the minimum element in an array
int findMin(int nums[], int start, int end) {
    if (start == end) {
        return nums[start];
    } else {
        int mid = start + (end - start) / 2;
        int min1 = findMin(nums, start, mid); // Recursion
        int min2 = findMin(nums, mid + 1, end); // Recursion
        return min(min1, min2);
    }
}

int main() {
    // Task 1:
    int base, exponent;
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    int result = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    // Task 2:
    int term_number;
    cout << "Enter the term number for series 2+5+8+...: ";
    cin >> term_number;
    if (term_number <= 0) { // Handle invalid input
        cout << "Invalid input " << endl;
        return 1;
    }
    int result2 = nth_term(term_number);
    cout << term_number << "th term of the series is: " << result2 << endl;

    // Task 3:
    int num_terms;
    cout << "Enter the number of terms for series summation of 2+5+8+..: ";
    cin >> num_terms;
    if (num_terms <= 0) {
        cout << "Invalid input." << endl;
        return 1;
    }
    int total_sum = sum_of_series(num_terms);
    cout << "The sum of the series up to " << num_terms << " terms is: " << total_sum << endl;

    // Task 4:
    int numTerms1;
    cout << "Enter the number of terms for the series 1+2+4+... : ";
    cin >> numTerms1;
    if (numTerms1 <= 0) { // Handle invalid input
        cout << "Invalid input" << endl;
        return 1;
    }
    int totalSum = sumOfSeries(numTerms1);
    cout << "The sum of the series up to " << numTerms1 << " terms is: " << totalSum << endl;

    // Task 5:
    int numElements;
    cout << "Enter the number of elements in the array: ";
    cin >> numElements;

    int arr[numElements];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < numElements; i++) { // Input array elements
        cin >> arr[i];
    }
    int maxElement = findMax(arr, 0, numElements - 1);
    int minElement = findMin(arr, 0, numElements - 1);

    cout << "max element"<<maxElement<<endl;
    cout<<"min element "<< minElement<<endl;


return 0;
}
