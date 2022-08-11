// Given a binary number represented as an array, write a function that takes the array and its size as a parameter, and returns the integer value. You may assume that 
// there are at least 1 and no more than 30 numbers in the array and that all the values are either 0 or 1. The array is ordered with most significant binary digit at the 
// start (index 0) and the least significant digit at the end.

#include <iostream>
#include <stdlib.h>

using namespace std;

int binaryconversion(int binary_digits[], int number_of_digits)
{
    int number = 0;
    int endPTR = number_of_digits -1 ;
    int multiplier = 1;

    for(int i=0; i<number_of_digits; i++)
    {
        number += binary_digits[endPTR]*multiplier;
        multiplier = multiplier * 2;
        endPTR = endPTR-1;

    }
    return number;
}

int main()
{
    int number_of_digits = 0;
    cout << "What number of digits would you like to include in your array? ";
    cin >> number_of_digits;
    int binary_digits[number_of_digits];
    for(int i = 0; i < number_of_digits; i++)
    {
        cout << "What is the digit you want to enter? ";
        cin >> binary_digits[i];
        cout << endl;
    }
    cout << "Your integer value is " << binaryconversion(binary_digits, number_of_digits) << endl;
}