#include <iostream>
#include <stdlib.h>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits)
{
    int multiplier = 1;
    int endPTR = number_of_digits - 1;
    int number = 0;

    while(endPTR>=0)
    {
        number += binary_digits[endPTR]*multiplier;
        endPTR = endPTR - 1;
        multiplier = multiplier * 2;

    }
    return number;

}

int main()
{
    int number_of_digits = 0;
    cout << "How many digits? ";
    cin >> number_of_digits;
    int binary_digits[number_of_digits];
    cout << endl;
    for(int i=0; i<number_of_digits; i++)
    {
        cout << "What digit? ";
        cin >> binary_digits[i];
        cout << endl;

    }
    cout << binary_to_int(binary_digits, number_of_digits);
    return 0;
}