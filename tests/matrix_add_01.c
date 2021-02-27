
#include <stdio.h>
// #include "MathTypes.h"
#include "Matrix_add.h"

int main(void)
{
    Matrix matrixA;
    Matrix matrixB;
    Matrix matrixC;

    uint32 matA[3][3];
    
    matrixA.rows = 3;
    matrixA.columns = 3;

    matA[0][0] = 1;
    matA[0][1] = 2;
    matA[0][2] = 3;

    matA[1][0] = 4;
    matA[1][1] = 5;
    matA[1][2] = 6;

    matA[2][0] = 7;
    matA[2][1] = 8;
    matA[2][2] = 9;

    matrixA.data = (uint32*)matA;

    uint32 matB[3][3];
    matrixB.data = (uint32*)matB;
    matrixB.rows = 3;
    matrixB.columns = 3;

    matB[0][0] = 1;
    matB[0][1] = 2;
    matB[0][2] = 3;

    matB[1][0] = 4;
    matB[1][1] = 5;
    matB[1][2] = 6;

    matB[2][0] = 7;
    matB[2][1] = 8;
    matB[2][2] = 9;

    uint32 matC[3][3];
    matrixC.data = (uint32*)matC;
    matrixC.rows = 3;
    matrixC.columns = 3;

    

    Matrix_addU32(&matrixA, &matrixB, &matrixC);



    printf("matC=%d\n", matC[0][0]);
    printf("matC=%d\n", matC[0][1]);
    printf("matC=%d\n", matC[0][2]);

    return 0;
}