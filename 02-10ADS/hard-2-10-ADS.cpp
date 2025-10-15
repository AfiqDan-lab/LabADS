//Hard Problems
//Find a specific pair in Matrix

#include <iostream>
using namespace std;

int findmaxv(int mat[5][5]) {
    int maxValue = -100;  // number limitation

    // check all possible (a,b) and (c,d)
    for (int a = 0; a < 5; a++) { //1 row
        for (int b = 0; b < 5; b++) { //1 column
            for (int c = a + 1; c < 5; c++) { //find number row below a
                for (int d = b + 1; d < 5; d++) { //find number column below b
                    int diff = mat[c][d] - mat[a][b];
                    if (diff > maxValue) { //if you substract and get more than before
                        maxValue = diff; //then maxvalue will change to the biggest one
                    }
                }
            }
        }
    }

    return maxValue;
}

int main() {
    int mat[5][5] = {
        { 1, 2, -1, -4, -20 },
        { -8, -3, 4, 2, 1 },
        { 3, 8, 6, 1, 3 },
        { -4, -1, 1, 7, -6 },
        { 0, -4, 10, -5, 1 }
    };

    cout << "Maximum Value is " << findmaxv(mat) << endl;

    return 0;
}
