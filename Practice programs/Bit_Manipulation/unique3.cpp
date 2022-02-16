// This programs returns a unique number out of a set of numbers that are repeated thrice.
// concept: we make an array of 64 bit, then in the index of array we check that if there is a set bet in that index of a number
// if there is a set bit in the same index of the number as the index of an array then we count ++.
// once all bits are counted with index, by observation its clear that the repeated number are modulus with 3 yield zero
// after all modulus operations we make a return of binary digit.
#include <iostream>
using namespace std;

bool getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setbit(int n, int pos)
{
    return (n | (1 << pos));
}

int unique(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getbit(arr[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setbit(result, i);
        }
    }
    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
    cout << "Unique number is : " << unique(arr, 10);
}