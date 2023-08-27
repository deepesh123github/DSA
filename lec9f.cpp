/* MAX & MIN IN ARAAY */ 
#include<iostream>
using namespace std; 

int main() {
int size;
cout<<"Enter the value of array"<<endl;
cin>>size;
int arr[size] ;
for(int i =0 ; i<size ; i++){
cin>>arr[i] ;
}

for(int i =0 ; i<size ; i++){
cout<<arr[i] <<"  ";
}

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
Enter the value of array
6
20
30
60
50
40
80
20  30  60  50  40  80   
Maximum value of array 80
Minimum value of array 20
*/