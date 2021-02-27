
#include "Matrix_add.h"


void Matrix_addU8(Matrix* const matrix1, Matrix* const matrix2, Matrix* const result)
{
    /* check input parameters */

    uint32 rowIdx;
    uint32 colIdx;

    uint8 *ptrR = (uint8*)matrix1->data;
    uint8 *ptrC = (uint8*)matrix2->data;
    uint8 *ptrT = (uint8*)result->data;

    for(rowIdx = 0; rowIdx < matrix1->rows; rowIdx++)
    {
        for(colIdx = 0; colIdx < matrix1->columns; colIdx++)
        {
            *(ptrT++) = *(ptrR++) + *(ptrC++);
        }
    }
}


void Matrix_addU32(Matrix* const matrix1, Matrix* const matrix2, Matrix* const result)
{
    /* check input parameters */

    uint32 rowIdx;
    uint32 colIdx;

    uint32 *ptrR = (uint32*)matrix1->data;
    uint32 *ptrC = (uint32*)matrix2->data;
    uint32 *ptrT = (uint32*)result->data;

    for(rowIdx = 0; rowIdx < matrix1->rows; rowIdx++)
    {
        for(colIdx = 0; colIdx < matrix1->columns; colIdx++)
        {
            *(ptrT++) = *(ptrR++) + *(ptrC++);
        }
    }
}

