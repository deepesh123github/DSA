#include <iostream>
using namespace std;

int isEven(int num)
{
    return !(num & 1);
}

int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    if (isEven(num))
    {
        cout << "The entered number is even.";
    }
    else
    {
        cout << "The entered number is odd.";
    }

    return 0;
}
