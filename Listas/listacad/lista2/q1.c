#include <stdio.h>

void somaarrays(int* array1, int* array2, int* saida, int n) {
    if(n <= 0) {
        return;
    }

    int offset = 50 - n;
    int* array = offset > 24 ? array2 : array1;
    saida[offset] = array[offset%25];

    somaarrays(array1, array2, saida, n-1);
}


int recSearch(int* arr, int l, int find) 
{ 
    int offset = l-1;

    if(offset <= 0) {
        return -1;
    }

    if(arr[50-offset] == find) {
        return 50-offset;
    }
x
    return recSearch(arr, offset, find);
}

int main(){

    int a[25];
    int b[25];
    int c[50];
    
    
    for(int i = 0; i < 25; i++) {
        a[i] = i;
        b[i] = i + 1;
    }

    somaarrays(a, b, c, 50);
    int find;
    scanf("%d", &find);
    int pos = recSearch(c, 50, find);
    printf("pos = %d\n", pos);

    printf("array a: ");
    for(int j = 0; j < 25; j++) {
        printf("%d, ", a[j]);
    }
    printf("\n");

    
    printf("array b: ");
    for(int k = 0; k < 25; k++) {
        printf("%d, ", b[k]);
    }
    printf("\n");

    printf("array c: ");
    for(int l = 0; l < 50; l++) {
        printf("%d, ", c[l]);
    }
    printf("\n");


}