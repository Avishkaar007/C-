
#include <iostream>
using namespace std;
#define R1 3           
#define C1 4            
#define R2 4            
#define C2 3            
void multiply(int mat1[][C1], int mat2[][C2]) {
    int result[R1][C2];
 
    cout << "Multiplication of given two matrices is:\n" << endl;
 
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            result[i][j] = 0;
 
            for (int k = 0; k < R2; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
 
            cout << result[i][j] << "\t";
        }
 
        cout << endl;
    }
}

int main(void) { 
    int mat1[R1][C1] = 
                {
                {10, 10, 10, 10},
                {20, 20, 20, 20},
                {30, 30, 30, 30}
                };
 
    int mat2[R2][C2] =
                {
                {10, 10, 10},
                {20, 20, 20},
                {30, 30, 30},
                {40, 40, 40}
                };
 
    if (C1 != R2) {
        cout << "The columns of 1st matrix must be equal to rows of second matrix" << endl;
 
    }
 
    multiply(mat1, mat2);
 
    return 0;
}