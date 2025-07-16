// Given an Array of size N rotate the array by K steps to the right 

// Code:-

#include<iostream>
using namespace std;

// Function to reverse the array as it will be used in all the 3 steps 
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    // For the case when K>n
    k = k % n;

    // Step 1: reverse first part(n-k) part
    reverse(arr, 0, n-k-1);

    // Step 2: reverse second part or remanig part 
    reverse(arr, n-k, n-1);

    // Step 3: reverse the whole array
    reverse(arr, 0, n-1);

    // Printing  result
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}