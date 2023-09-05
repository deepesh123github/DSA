// sum of array
#include <iostream>
using namespace std;

int main()
{
    int sum = 0 ;
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
        sum = sum + arr[i] ;
    }
cout<<"sum of array"<<sum;
   
  return 0;
}
