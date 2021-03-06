// Pass-by-value used to cubea variable’s value.
#include "stdafx.h"

using namespace std;

void cubeByRef(int *); // prototype
void cubeByRef(int &);

int main()
{
    int number = 0;

    cout << "Please enter a number to cube: " << endl;
    cin >> number;

    cout << "The original value of number is " << number;
    cubeByRef(&number); // pass number by value to cubeByValue
    cout << "\nThe new value of number is " << number << endl;
    cout << "The original value of number is " << number;
    cubeByRef(number); // pass number by value to cubeByValue
    cout << "\nThe new value of number is " << number << endl;

} // end main

// calculate and return cube of integer argument
void cubeByRef(int *n)
{
    *n = *n * *n * *n; // cube local variable n and return result
} // end function

  // calculate and return cube of integer argument
void cubeByRef(int &n)
{
    n = n * n * n; // cube local variable n and return result
} // end function cubeByValue