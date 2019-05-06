#include <stdio.h>
#include <stdlib.h>
#include <string.h>




typedef struct{
    char fone[201];
}Lista;
Lista lin[100001];

int comp(const void  *f1, const void *f2){
    Lista *x = (Lista *)f1;
    Lista *y = (Lista *)f2;

    return strcmp(x->fone,y->fone);
}

int main(){

    int n;
    int f;
    int i1;
    int i;
    int l;
    

    while(scanf("%d", &n) != EOF){

            for(i = 0; i < n; i++)
                scanf("%s",lin[i].fone);
                qsort(lin,n,sizeof(Lista), comp);

            
            for(i = 0, f = 0, i1 = 0; i < n-1; i++){
                for(i1 = 0;lin[i].fone[i1] != '\0' && lin[i].fone[i1] == lin[i + 1].fone[i1]; i1++){
                      f++;
                     }         
                      
                      i1 = 0;

             }
             printf("%d\n", f);
        }
    return 0;
}