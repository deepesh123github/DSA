/* Reverse Array into another array */ 
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    int arr1[100];
    int arr2[100];
    
    // Enter the values of array
    cout << "Enter the values of array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    // Print the values of original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int j = 0;  // Initialize index for arr2

    for (int i = size - 1; i >= 0; i--) {
        arr2[j] = arr1[i];
        j++;  // Increment index for arr2
    } 

    // Print the reversed array
    cout << "Reversed array into another array 2: "<<endl;
    for (int j = 0; j < size; j++) {
        cout << arr2[j] << " ";
    }
    cout << endl;

    return 0;
}
/*
output
Enter the size of array: 4
Enter the values of array: 
11
12
13
14
Original array: 11 12 13 14 
Reversed array into another array 2: 
14 13 12 11 
*/