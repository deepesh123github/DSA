// REVERSE THE ARRAY
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    int arr[100];
    
    // Enter the values of array
    cout << "Enter the values of array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Print the values of original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    int start = 0;
    int end = size - 1;
    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
