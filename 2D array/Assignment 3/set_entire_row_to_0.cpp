#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<bool> row(m, false);
        vector<bool> col(n, false);

        // First pass to find zeroes
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 0) {
                    row[i] = true;
                    col[j] = true;
                }
            }
        }

        // Set rows to zero
        for (int i = 0; i < m; i++) {
            if (row[i]) {
                for (int j = 0; j < n; j++) {
                    arr[i][j] = 0;
                }
            }
        }

        // Set columns to zero
        for (int j = 0; j < n; j++) {
            if (col[j]) {
                for (int i = 0; i < m; i++) {
                    arr[i][j] = 0;
                }
            }
        }
    }
};

int main() {
    Solution solution;
    
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    solution.setZeroes(matrix);

    cout << "Matrix after setZeroes:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
