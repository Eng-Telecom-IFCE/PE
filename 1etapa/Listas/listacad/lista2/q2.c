#include <stdio.h>

void  armazena30(int vet[30],int vet1[30], int len){
    if (len == 0) {
        return;
    } else {
        int offset = 30 - len;
        vet[offset] = offset % 2 == 0 ? vet1[offset]*2 :  vet1[offset]*5;
        armazena30(vet, vet1, len-1);
    }
}
int main(){
    int vet[30];
    int vet1[30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    
    armazena30(vet, vet1, 30);
    
    for(int i = 0; i < 30; i++){
        printf("vet[i] = %d\n", vet[i]);
    }
}