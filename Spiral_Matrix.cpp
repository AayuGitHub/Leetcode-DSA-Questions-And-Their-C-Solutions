/*
                                                  Spiral Matrix
                                                  Given an m x n matrix, return all elements of the matrix in spiral order.
                                                  Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
                                                  Output: [1,2,3,6,9,8,7,4,5]
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{

    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;
    vector<int> ans;
    // Index Initialization
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {

        // Print Starting Row
        for (int index = startingCol; count < total && index <= endingCol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // Print Ending Col
        for (int index = startingRow; count < total && index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // Print Ending Row

        for (int index = endingCol; count < total && index >= startingCol; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // Print Starting Col

        for (int index = endingRow; count < total && index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> matrix;

    spiralOrder(matrix);
    
    
    return 0;
}
