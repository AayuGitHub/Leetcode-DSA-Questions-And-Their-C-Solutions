/*
Search In A 2-D Matrix:

Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

*/

#include <iostream>
using namespace std;

int binarySearOn2DMat(int arr[][3], int target);

int main(int argc, char const *argv[])
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int target;
    cin >> target;

    cout << binarySearOn2DMat(arr, target);

    cout << ((0 + 11)/2) << endl;

    return 0;
}

int binarySearOn2DMat(int arr[3][3], int target)
{

    int start = 0;
    int end = 8;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        int element = arr[mid / 3][mid % 3];

        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}