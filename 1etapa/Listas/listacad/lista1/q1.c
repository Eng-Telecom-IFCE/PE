#include <stdio.h>


int main() {

    int i = 0, j = 0;
    int A[25];
    int B[25];
    int C[50];

    for(i = 0; i < 25; i++){
       scanf("%d", &A[i]);
    }
    for(j = 0; j < 25; j++){
       scanf("%d", &B[j]);
    }

   for (i = 0; i < 25; i++) {
   
	C[i] = A[i];
	C[i + 25] = B[i];

    }
 
    
    for(i = 0; i < 50; i++){

        printf("\nC[i] = %d\n", C[i]);
      }

       int x;
    scanf("%d", &x);
    for(i = 0; i < 50; i++) {

        printf("\nC[i] = %d\n", C[i]);
    
        
    

        if(C[i] == x) {
          
            printf("Encontrado C[i] = %d", C[i]);
            return i;
        }

            
    }
    return -1;  
}