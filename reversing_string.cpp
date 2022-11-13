/*

                                REVERSING A CHARACTER ARRAY

*/

#include <iostream>
using namespace std;

void reverseArr(char arr[], int n);

int main(int argc, char const *argv[])
{
    char arr[20];

    cout << "Enter name here: " << endl;
    cin >> arr;

    reverseArr(arr, 20);

    cout << arr << endl;

    return 0;
}

void reverseArr(char arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        swap(arr[s++], arr[e--]);
    }
}