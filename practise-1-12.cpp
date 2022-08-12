#include <iostream>
#include <stdlib.h>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits)
{
    int number = 0;
    int endPTR = number_of_digits-1;
    int multiplier = 1;
    while(endPTR>=0)
    {
        number += binary_digits[endPTR] * multiplier;
        multiplier = multiplier * 2;
        endPTR = endPTR -1;
    }
    
    return number;

}

int main()
{
    int number_of_digits;
    cout << "How many binary digits? ";
    cin >> number_of_digits;
    cout << endl;
    int binary_digits[number_of_digits];
    for(int i=0; i<number_of_digits; i++)
    {
        cout << "Please enter a digit ";
        cin >> binary_digits[i];
        cout << endl;
    }
    cout << "Your number in decimal is " << binary_to_int(binary_digits, number_of_digits) << endl;

    return 0;
}