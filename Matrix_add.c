
#include "MathTypes.h"

Matrix* Matrix_addU8(Matrix* const matrix1, Matrix* const matrix2)
{
    /* check input parameters */

    uint32 rowIdx;
    uint32 colIdx;

    Matrix* result;


    for(rowIdx = 0; rowIdx < matrix1->rows; rowIdx++)
    {
        for(colIdx = 0; colIdx < matrix1->columns; colIdx)
        {
            *((uint8*)result->data) = *((uint8*)matrix1->data) + *((uint8*)matrix2->data);
            (uint8*)result->data++;
            (uint8*)matrix1->data++;
            (uint8*)matrix2->data++;
        }
    }

    return result;
}


Matrix* Matrix_addU32(Matrix* const matrix1, Matrix* const matrix2)
{
    /* check input parameters */

    uint32 rowIdx;
    uint32 colIdx;

    Matrix* result;


    for(rowIdx = 0; rowIdx < matrix1->rows; rowIdx++)
    {
        for(colIdx = 0; colIdx < matrix1->columns; colIdx)
        {
            *((uint32*)result->data) = *((uint32*)matrix1->data) + *((uint32*)matrix2->data);
            (uint32*)result->data++;
            (uint32*)matrix1->data++;
            (uint32*)matrix2->data++;
        }
    }

    return result;
}

