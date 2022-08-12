#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void print_binary_str(std::string decimal_number)
{
    int numberToConvert = stoi(decimal_number);
    int r = 0;
    int multiplier = 1;
    int number = 0;

    while(numberToConvert != 0)
    {
        r = numberToConvert % 2;
        numberToConvert = numberToConvert /= 2;
        number += r * multiplier;
        multiplier = multiplier * 10;

    }
    cout << number << endl; 
    return; 
}

int main()
{
    string decimal_number = "0";
    cout << "Please enter the decimal number you wish to convert ";
    cin >> decimal_number;
    print_binary_str(decimal_number);
}
