/* MAX & MIN IN ARAAY */ 
#include<iostream>
using namespace std; 

int main() {
int size;
cout<<"Enter the size of array"<<endl;
cin>>size;
int arr[size] ;
//Enter the value of array
cout<<"Enter the value of array ";
for(int i =0 ; i<size ; i++){
cin>>arr[i];
}
// print the value of array
cout<<"Print the value of array ";
for(int i =0 ; i<size ; i++){
cout<<arr[i] <<"  ";
}
cout<<endl;
int currmin = arr[0] ;
int currmax = arr[0] ;

for(int i =0 ;i<size;i++){
if(arr[i]>currmax) {
    currmax = arr[i] ;
}
if(arr[i]<currmin) {
    currmin = arr[i] ;
}

}
 cout<<endl;
cout<<"Maximum value of array "<<currmax<<endl;
cout<<"Minimum value of array "<<currmin<<endl;
return 0 ;
}

/*
OUTPUT
Enter the size of array
6
Enter the value of array 12
13
14
15
16
18
Print the value of array 12  13  14  15  16  18  

Maximum value of array 18
Minimum value of array 12
*/