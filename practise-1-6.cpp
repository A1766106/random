#include <iostream>
#include <stdlib.h>

using namespace std;

int sum_min_max(int integers[], int length);
int array_min(int integers[], int length);
int array_max(int integers[], int length);

int sum_min_max(int integers[], int length)
{
    int sum = array_max(integers, length) + array_min(integers, length);
    return sum;
}

int array_min(int integers[], int length)
{
    int minNumber = integers[0]; 
    for(int i=1; i<length; i++)
    {
        if(minNumber>integers[i])
        {
            minNumber = integers[i];
        }
    }
    return minNumber;
}

int array_max(int integers[], int length)
{
    int maxNumber = integers[0]; 
    for(int i=1; i<length; i++)
    {
        if(maxNumber<integers[i])
        {
            maxNumber = integers[i];
        }
    }
    return maxNumber;
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
    cout << "The Sum of the array is: " << sum_min_max(integers, arraySize) << endl;
}
