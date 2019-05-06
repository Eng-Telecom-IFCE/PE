#include<stdio.h>
#define MAX 10

void matrizMult(int[MAX][MAX], int[MAX][MAX]);
int lin1, lin2, col1, col2;
int res[MAX][MAX];

int main() {

   int mat1[MAX][MAX], mat2[MAX][MAX], i, j, k;

   printf("1° - Digite as linhas e colunas da primeira matriz: ");
   scanf("%d%d", &lin1, &col1);
   printf("2° - Digite as linhas e colunas da segunda matriz: ");
   scanf("%d%d", &lin2, &col2);

   if (col1 != lin2) {
      printf("Matrix multiplication is not possible");
   } else {
      printf("1° - Digite a primeira matriz: ");
      for (i = 0; i < lin1; i++) {
         for (j = 0; j < col1; j++) {
            scanf("%d", &mat1[i][j]);
         }
      }

      printf("2° - Digite a segunda matriz: ");
      for (i = 0; i < lin2; i++) {
         for (j = 0; j < col2; j++) {
            scanf("%d", &mat2[i][j]);
         }
      }

      printf("\n 1° - A primeira matriz: \n");
      for (i = 0; i < lin1; i++) {
         printf("\n");
         for (j = 0; j < col1; j++) {
            printf(" %d ", mat1[i][j]);
         }
      }

      printf("\n2° - A segunda matriz : \n");
      for (i = 0; i < lin2; i++) {
         printf("\n");
         for (j = 0; j < col2; j++) {
            printf("%d ", mat2[i][j]);
         }
      }
      matrizMult(mat1, mat2);
   }

   printf("\nA multiplicação de duas matrizes : \n");
   for (i = 0; i < lin1; i++) {
      printf("\n");
      for (j = 0; j < col2; j++) {
         printf("%d ", res[i][j]);
      }
   }
   return 0;
}

void matrizMult(int a[MAX][MAX], int b[MAX][MAX]) {
   static int sum, i = 0, j = 0, k = 0;
   if (i < lin1) {
      if (j < col2) {
         if (k < col1) {
            sum += a[i][k] * b[k][j];
            k++;
            matrizMult(a, b);
         }
         res[i][j] = sum;
         sum = 0;
         k = 0;
         j++;
         matrizMult(a, b);
      }
      j = 0;
      i++;
      matrizMult(a, b);
   }
}