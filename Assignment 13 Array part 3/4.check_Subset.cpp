//Check if an array is a subset of another .

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSubset(vector<int>& A, vector<int>& B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int i = 0, j = 0;
    while (i < A.size() && j < B.size()) {
        if (A[i] < B[j]) {
            return false;
        } else if (A[i] == B[j]) {
            i++;
        }
        j++;
    }

    return (i == A.size());
}

int main() {
    vector<int> A = {1, 2, 3};
    vector<int> B = {4, 1, 2, 3, 5};

    if (isSubset(A, B)) {
        cout << "A is a subset of B" << endl;
    } else {
        cout << "A is not a subset of B" << endl;
    }

    return 0;
}
