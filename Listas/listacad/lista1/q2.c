#include <stdio.h>

void  armazena30(int vet[30], int n, int len){
    if (len == 0) {
        return;
    } else {
        int offset = 30 - len;
        vet[offset] = offset % 2 == 0 ? n*2 : n*5;
        armazena30(vet, n, len-1);
    }
}
int main(){
    int vet[30];
    int n[30];
	scanf("%d", n[30]);
    	armazena30(vet,n, 30);
    for(int i = 0; i < 30; i++){
	
    	
        printf("vet[i] = %d\n", vet[i]);
    }
}