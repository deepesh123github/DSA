//  Swap the array between two index
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
      cout<<arr[i] <<" ";
    }
  
  for(int i =0; i<size;  i=i+2) {
      if(i+1<size) {
        swap(arr[i] , arr[i+1]) ;
      }
  }
cout<<endl;
cout<< "swap the array between two index = ";
    for (int i = 0; i < size; i++)
    {
      cout<<arr[i] <<" ";
    }
  
  return 0;
}

/*
output
Enter the size of array
4
Enter the value of array 56
12
36
45
Print the value of array 56 12 36 45 
swap the array between two index = 12 56 45 36 
*/