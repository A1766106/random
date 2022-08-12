// converting from binary to decimal

#include <iostream>
#include <stdlib.h>

using namespace std;

void print_binary_str(std::string decimal_number)
{
    int numbertoconvert = stoi(decimal_number);
    int multiplier = 1;
    int r = 0;
    int bin = 0;

    while(numbertoconvert != 0)
    {
        r = numbertoconvert % 2;
        numbertoconvert /= 2;
        bin += r*multiplier;
        multiplier*=10;
    }
    cout << bin << endl;
    return;
}

int main()
{
    string decimal_number = "0";
    cout << "Please provide a decimal number you wish to convert to binary: ";
    cin >> decimal_number;
    print_binary_str(decimal_number);

    return 0;
}