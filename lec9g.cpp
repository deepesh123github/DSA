// swap the array 
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[size];

    // Enter the value of array
    cout << "Enter the value of array ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // print the value of array
    cout << "Print the value of array ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << endl;
    cout << "Print the value of array ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}


/*output
Enter the size of array
5
Enter the value of array 12
13
14
45
36
Print the value of array 12  13  14  45  36  
Print the value of array 36  45  14  13  12
*/
