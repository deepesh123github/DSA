#include<iostream>
using namespace std; 

int main() {
char ch;
int  b,c ;
cout<<"Arithmetic operator perform ";
cin>>ch;
cout<<"value of b and c =";
cin>>b>>c;
switch ( ch)
{
case 'a':
   cout<<"sum of two number";
    cout<<"a =" << b+c;
    break;

case 'b':
   cout<<"Subtract of two of number";
    cout<<"a = "<< b -c;
    break;

case 'c':
   cout<<" Multiply of two number";
   cout<<"a = "<< b*c;
    break;

case 'd':
   cout<<"Division of two number ";
   cout<<"a = "<<b/c;
    break;

case 'e':
   cout<<"modulas of two number ";
   cout<<"a = "<<b%c;
    break;


default:
     cout<<"this is not an operator";
    break;
}

    return 0 ;
}