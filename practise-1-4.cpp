#include <iostream>
#include <stdlib.h>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits)
{
    int multiplier = 1;
    int count = number_of_digits - 1;
    int number = 0;

    while(number_of_digits!=0)
    {
        number += binary_digits[count] * multiplier;
        multiplier = multiplier * 2;
        number_of_digits = number_of_digits - 1;
        count = count -1;

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
    cout << "Your integer value is " << binary_to_int(binary_digits, number_of_digits) << endl;

}