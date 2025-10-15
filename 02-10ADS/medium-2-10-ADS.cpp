//medium problem
//A Boolean Matrix Question
/*Given a boolean matrix mat where each cell contains either 0 or 1, 
the task is to modify it such that if a matrix cell matrix[i][j] is 1 
then all the cells in its ith row and jth column will become 1.*/

#include <iostream>
using namespace std;

void booleanMatrix(int mat[3][4], int rows, int cols) {
    bool row[rows] = {0}; 
    bool col[cols] = {0};

    // Step 1: Check semua element
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 1) {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    // Step 2: Update matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (row[i] || col[j]) {
                mat[i][j] = 1;
            }
        }
    }
}

int main() {
    int mat[3][4] = {
        {1, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0}
    };

    booleanMatrix(mat, 3, 4);

    // Print result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
