#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M1[5][3] = {{1, 1, 2}, {1, 1, 2}, {2, 1, 1}, {1, 2, 2}, {1, 1, 1}};
    int M2[5][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 0}, {0, 0, 0}, {0, 0, 0}};
    int M3[2][15], i, j, k, l, m, n;

    
    for(i = 0; i < 5; i++){
        for(l = 0; l < 3; l++){
            M3[0][n] = M1[i][l];
            n++;
        }
    }

    for(j = 0; j < 5; j++){
        for(m = 0; m < 3; m++){
            M3[0][n] = M2[j][m];
            n++;
        }
    }

    printf("\n M1 = ");
    for(i = 0; i < 5; i++){
        for(l = 0; l < 3; l++){
            printf("|%d", M1[i][l]);
        }
        printf("|\n     ");
    }

    printf("\n M2 = ");
    for(j = 0; j < 5; j++){
        for(m = 0; m < 3; m++){
            printf("|%d", M2[j][m]);
        }
        printf("|\n     ");
    }

    printf("\n M3 = ");
    for(k = 0; k < 2; k++){
        for(n = 0; n < 15; n++){
            printf("|%d", M3[k][n]);
        }
        printf("|\n     ");
    }

    getchar();
}
