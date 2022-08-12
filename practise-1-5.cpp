#include <iostream>
#include <stdlib.h>

using namespace std;

int sum_if_palindrome(int integers[], int length);
bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);

int sum_if_palindrome(int integers[], int length)
{
    if(is_palindrome(integers, length)==false)
    {
        return -2;
    }
    else if (length <=0)
    {
        return -1;
    }
    return sum_array_elements(integers, length);

}

bool is_palindrome(int integers[], int length)
{
    int endPTR = length - 1;
    for(int i=0; i<length/2; i++)
    {
        if(integers[i] != integers[endPTR]){
          return false;  
        }
        endPTR = endPTR - 1;
    }
    return true;

}   


int sum_array_elements(int integers[], int length)
{
    int sum =0;
    for(int i=0; i<length; i++)
    {
        sum += integers[i];
    }
    return sum;
}

int main()
{
    int arraySize = 0;

    cout << "What is the size of the array? " << endl;
    cin >> arraySize;
    int integers[arraySize];

    for(int i=0; i<arraySize; i++)
    {
        cout << "What number would you like to be in array? ";
        cin >> integers[i];

    }
    cout << "Sum of array (if not palindrome -2 and if palindrome but the length is 0 or less then -1): " << sum_if_palindrome(integers,arraySize) << endl; 
    return 0;
}