#include "main.h"

int main()
{
    cout << "Enter a value\n";
    cin >> number;

    if(number % 2 == 0)
        cout << "The value " << number << " is an even number\n";
    else
        cout << "The value " << number << " is an odd number\n";
}