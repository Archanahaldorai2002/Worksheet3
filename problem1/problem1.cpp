#include <iostream>
using namespace std;

// Function to find sum
int findSum(int a[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

// Function to find average
float findAverage(int a[], int n) {
    return (float)findSum(a, n) / n;
}

// Function to find maximum
int findMax(int a[], int n) {
    int maxVal = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > maxVal)
            maxVal = a[i];
    }
    return maxVal;
}

// Function to find minimum
int findMin(int a[], int n) {
    int minVal = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < minVal)
            minVal = a[i];
    }
    return minVal;
}

int main() {
    int n, arr[5];

    cout << "Enter number of integers (max 5): ";
    cin >> n;

    if(n < 1 || n > 5) {
        cout << "Invalid number! Please enter between 1 and 5." << endl;
        return 0;
    }

    cout << "Enter " << n << " integers: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nSum = " << findSum(arr, n);
    cout << "\nAverage = " << findAverage(arr, n);
    cout << "\nMaximum = " << findMax(arr, n);
    cout << "\nMinimum = " << findMin(arr, n) << endl;

    return 0;
}

