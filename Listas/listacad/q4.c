#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5][4] = {{1, 1, 2, 3}, {5, 8, 13, 21}, {34, 55,
    89, 144}, {233,300 , 387, 610}, {997, 1607, 2714, 3321}};
    int B[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int C[5][3], i, j, k;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++)
            C[i][j] = 0;
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 4; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("\n A = ");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            printf("|%d", A[i][j]);
        }
        printf("|\n  ");
    }

    printf("\n B = ");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("|%d", B[i][j]);
        }
        printf("|\n     ");
    }

    printf("\n C = ");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            printf("|%d", C[i][j]);
        }
        printf("|\n     ");
    }

    return 0;
}
