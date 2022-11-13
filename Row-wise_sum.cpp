/*
                                                    Row-Wise Sum
*/

#include <iostream>
using namespace std;

void printSum(int arr[3][3], int row, int col);

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

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << "  ";
    //     }
    //     cout << endl;
    // }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    printSum(arr, 3, 3);
    return 0;
}

// void printSum(int arr[3][3], int row, int col)
// {
//     cout << "Printing The Sum: ";
//     for (int row = 0; row < 3; row++)
//     {
//         int sum = 0;
//         for (int col = 0; col < 3; col++)
//         {
//             sum += arr[row][col];
//         }
//         cout << sum << "    ";
//     }
// }
void printSum(int arr[3][3], int row, int col)
{
    cout << "Printing The Sum Col Wise: ";
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << "    ";
    }
}