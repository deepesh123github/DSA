// INTRODUCTION TO ARRAY
#include<iostream>
using namespace std ;

int  main(){
  //declare 
  int number [15] ;

  //accessing an array 
cout<<" value at 14  index " << number[14] << endl  ;
// we dont initilize the value so array take garbage value 

//cout<<" value at 20  index " << number[20] << endl  ;
   
  // intializsing an array 
  int second [3] = {5,7,11} ;
  //accessing an element 
cout<<" value at 2 index " << number[2] << endl  ; 

int third[15] = {2,7} ;

int n = 3 ;
cout << "Printing the array" <<endl ;
// print the array 
for(int i  = 0 ; i<n; i++) {
    cout<<third [i] << " ";
}
 
cout<< endl <<"Everything is fine "<<endl;
    return 0;
} ;
   
