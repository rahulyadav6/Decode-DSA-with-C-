/*
Write a function which accepts a 2D array of integers and its size as arguments and displays the
elements of middle row and the elements of middle column.
*/

#include <iostream>
using namespace std;

void displayMiddleRowAndColumn(int matrix[5][5], int rows, int cols) {
    // Calculate the middle row and column indices
    int middleRowIndex = rows / 2;
    int middleColIndex = cols / 2;

    for(int i=0; i<rows; i++){
        for(int j =0; j<cols; j++){
            if(i==middleRowIndex || j == middleColIndex){
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    cout << endl;
}

int main() {
    // Define a 5x5 matrix
    int matrix[5][5] = {
        { 1,  2,  3,  4,  5},
        { 6,  7,  8,  9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int rows = 5;
    int cols = 5;

    // Call the function to display the middle row and column
    displayMiddleRowAndColumn(matrix, rows, cols);

    return 0;
}
