#include <iostream>
#include <cmath> // for pow function
using namespace std;

// Function to calculate the power of a number
int power(int n, int p) {
    if (p == 0) { // Base case: if the exponent is 0
        return 1; // Return 1 as any number raised to the power of 0 is 1
    } else {
        return n * power(n, p - 1); // Recursively calculate the power by multiplying 'n' with itself 'p' times
    }
}

// Function to calculate the nth term of the 2+5+8+.. series
int nth_term(int n) {
    if (n == 1) { // Base case: if it's the first term of the series
        return 2; // Return 2 as the first term
    } else {
        return 2 + 3 * (n - 1); // Calculate the nth term using the formula 2 + 3*(n-1)
    }
}

// Function to calculate the summation of the nth term of the 2+5+8+.. series
int sum_of_series(int n) {
    if (n <= 0) { // Handling invalid input where n is less than or equal to 0
        return 0;
    }
    int sum = 0; // Initialize sum to 0
    for (int i = 1; i <= n; i++) {
        sum += nth_term(i); // Add the nth term to the sum
    }
    return sum; // Return the total sum of the series
}

// Function for the summation of the 1+2+4+8+.. series
int sumOfSeries(int n) {
    if (n == 1) { // Base case: if there's only one term in the series
        return 1; // Return 1 as the sum of the series
    } else {
        return (1 * (1 - pow(2, n))) / (1 - 2); // Calculate the sum of the series using the geometric series formula
    }
}

// Function to find the maximum element in an array
int findMax(int nums[], int start, int end) {
    if (start == end) { // Base case: if there's only one element in the array
        return nums[start]; // Return that element
    } else {
        int mid = start + (end - start) / 2; // Calculate the mid index of the array
        int max1 = findMax(nums, start, mid); // Recursively find the maximum element in the left half
        int max2 = findMax(nums, mid + 1, end); // Recursively find the maximum element in the right half
        return max(max1, max2); // Return the maximum of the maximum elements found in the two halves
    }
}

// Function to find the minimum element in an array
int findMin(int nums[], int start, int end) {
    if (start == end) { // Base case: if there's only one element in the array
        return nums[start]; // Return that element
    } else {
        int mid = start + (end - start) / 2; // Calculate the mid index of the array
        int min1 = findMin(nums, start, mid); // Recursively find the minimum element in the left half
        int min2 = findMin(nums, mid + 1, end); // Recursively find the minimum element in the right half
        return min(min1, min2); // Return the minimum of the minimum elements found in the two halves
    }
}

int main() {
    // Task 1: Calculate power of a number
    int base, exponent;
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    int result = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    // Task 2: Calculate the nth term of the 2+5+8+.. series
    int term_number;
    cout << "Enter the term number for series 2+5+8+...: ";
    cin >> term_number;
    if (term_number <= 0) {
        cout << "Invalid input: Please enter a positive integer." << endl;
        return 1;
    }
    int result2 = nth_term(term_number);
    cout << term_number << "th term of the series is: " << result2 << endl;

    // Task 3: Calculate the summation of the nth term of the 2+5+8+.. series
    int num_terms;
    cout << "Enter the number of terms for series summation of 2+5+8+..: ";
    cin >> num_terms;
    if (num_terms <= 0) {
        cout << "Invalid input: Please enter a positive integer." << endl;
        return 1;
    }
    int total_sum = sum_of_series(num_terms);
    cout << "The sum of the series up to " << num_terms << " terms is: " << total_sum << endl;

    // Task 4: Calculate the summation of the 1+2+4+8+.. series
    int numTerms1;
    cout << "Enter the number of terms for the series 1+2+4+... : ";
    cin >> numTerms1;
    if (numTerms1 <= 0) {
        cout << "Invalid input: Please enter a positive integer." << endl;
        return 1;
    }
    int totalSum = sumOfSeries(numTerms1);
    cout << "The sum of the series up to " << numTerms1 << " terms is: " << totalSum << endl;

    // Task 5: Find the maximum and minimum elements in an array
    int numElements;
    cout << "Enter the number of elements in the array: ";
    cin >> numElements;

    int arr[numElements];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < numElements; i++) {
        cin >> arr[i];
    }
    int maxElement = findMax(arr, 0, numElements - 1);
    int minElement = findMin(arr, 0, numElements - 1);
    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;

    return 0;
}
