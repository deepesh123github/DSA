// prime number
#include<iostream>
using namespace std;
int main(){
int n; 
cout<<"enter the value of n"<<endl  ;
cin>>n;
bool isPrime = 1    ;  //we also take true = 1  or false = 0  

for (int  i = 2 ; i<n ; i++)
{
    if(n%i == 0){
        isPrime = 0;
       break;
    }
}

if( isPrime == 0) {
    cout<<"NOT A PRIME NUMBER"<<endl;
}
else{
    cout<<" IS A PRIME NUMBER";
} 
return 0 ; 
};