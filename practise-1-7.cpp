#include <iostream>
#include <stdlib.h>

using namespace std;

void print_bin_str(std::string decimal_number)
{
    int processingNumber = stoi(decimal_number);
    int r = 0;
    int multiplier = 1;
    int bin = 0;

    while(processingNumber != 0)
    {
        r = processingNumber % 2;
        processingNumber /= 2;
        bin += r * multiplier;
        multiplier *= 10;
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