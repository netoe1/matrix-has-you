#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <signal.h>

typedef struct matrixfloat
{
    float **p;
    int i;
    int j;
} MatrixFloat;

MatrixFloat createMatrix(const int i, const int j)
{
    // Creating matrix

    MatrixFloat newMatrix;

    // Creating lines.
    newMatrix.p = (float **)malloc(sizeof(float) * i);
    // Creating columns
    for (int a1 = 0; a1 < j; a1++)
    {
        newMatrix.p[a1] = (float *)malloc(sizeof(float) * j);
    }

    return newMatrix;
}
int main(void)
{
    return 0;
}