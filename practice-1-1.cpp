// Given a positive decimal number, write a function that transforms it into binary, and prints out the result. You may assume that the string contains at least 1 and 
// no more than 9 decimal digits. The output should only include the binary digits followed by a new line.

#include <iostream>
#include <stdlib.h>

using namespace std;

void print_bin_str(std::string decimal_number)
{
    int numberToBeProcessed = stoi(decimal_number);
    int r = 0;
    int bin = 0;
    int designator = 1;

    while(numberToBeProcessed != 0)
    {
        r = numberToBeProcessed % 2;
        numberToBeProcessed /= 2;
        bin += r*designator;
        designator *= 10;
    }
    cout << bin << endl;
    return;
}

int main()
{
    string decimal_number = "0";
    cout << "Please provide a decimal number you wish to convert to binary: ";
    cin >> decimal_number;
    print_bin_str(decimal_number);

    return 0;
}