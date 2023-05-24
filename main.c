#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/*
    The main diagonal of an Am×n matrix is the collection of aij elements
    of the array where i=j.
    The secondary diagonal of this matrix is formed by the elements aij where i+j=n+1.

    PS:
    n = matrix size's;
    i = line
    j = column
*/
#define SQ_2 2
#define SQ_3 3

float calc_det(float **m, const int __TYPEOFMATRIX)
{

    float det_res;
    float dp, ds;

    dp = ds = det_res = 0;
    switch (__TYPEOFMATRIX)
    {
    case SQ_2:
        puts("CALC_DET:You choose 2-square matrix.");
        det_res = (m[0][0] * m[1][1]) - (m[1][0] * m[0][1]);
        break;
    case SQ_3:
        puts("CALC_DET:You choose 3-square matrix.");
        break;

    default:
        puts("CALC_DET ERROR:You choose an invalid matrix type's, read the documentation file.");
        break;
    }

    return det_res;
}

int main(void)
{
    printf("\nHello World!");
    return 0;
}