// Given a square matrix A of N rows and columns, return the Transpose of the matrix

// note transpose is simply the rows fippled with its columns.
#include <iostream>
using namespace std;

int main()
{
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "\n ******The matrix A**********\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n ********Transpose of A*******\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j =i ; j < 3; j++)
        {
            // swap
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}