/* find Unique element */
#include <iostream>
using namespace std;

int main()
{
    int size;
    int ans  = 0;
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
  for(int i =0 ; i<size ; i++) {
    ans = ans^arr[i] ;
  }
  cout<<endl<<ans;
  return 0 ;
}
