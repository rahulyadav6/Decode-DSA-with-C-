#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n));
    int minr = 0;
    int maxr = n-1;
    int minc = 0;
    int maxc = n-1;
    int tne = n*n;
    int count = 0;
    int a = 1;
    while(count < tne){
        for(int j = minc; j <= maxc && count < tne; j++){
            matrix[minr][j] = a++;
            count++;
        }
        minr++;

        for(int i = minr; i <= maxr && count < tne; i++){
            matrix[i][maxc] = a++;
            count++;
        }
        maxc--;

        for(int j = maxc; j >= minc && count < tne; j--){
            matrix[maxr][j] = a++;
            count++;
        }
        maxr--;

        for(int i = maxr; i >= minr && count < tne; i--){
            matrix[i][minc] = a++;
            count++;
        }
        minc++;
    }
    return matrix;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for(const auto& row : matrix) {
        for(const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    vector<vector<int>> matrix = generateMatrix(n);
    printMatrix(matrix);
    return 0;
}
