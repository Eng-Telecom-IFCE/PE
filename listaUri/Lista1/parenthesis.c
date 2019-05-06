#include <stdio.h>
 
int main(){
    char linha[1001];
    int p, esq, dir;
    while(scanf("%s",&linha) != EOF){
       esq = 0;
       dir = 0;
       for(i = 0; linha[p] != ' '; p++) {
             if(linha[p] == '(') 
             esq++;
             else if (linha[p] == ')') {
                  dir++;
                  if(esq > 0){
                         esq--;
                         dir--;
                  }
             }
       }
       if(esq == 0 && dir == 0) 
       printf("correct\n");
       else 
       printf("incorrect\n");
    }
    return 0;
}