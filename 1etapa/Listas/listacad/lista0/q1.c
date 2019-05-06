#include <stdio.h>
#include <stdlib.h>

int main() {

    int u, v, w;
    int Vum[25] = {1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1};
    int Vdois[25] ={1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1};
    int Vconc[50];
    
    fflush(stdin);
    while(u < 25) {
        Vconc[w] = Vum[u];
        u++;
        w++;
    }

    while(v < 25) {
        Vconc[w] = Vdois[v];
        v++;
        w++;
    }      
    printf("\nUm:\n");
    for(u = 0; u < 25; u++)
    printf("{%d} ",Vum[u]);

    printf("\nDois:\n");
    for(v = 0; v < 25; v++)
    printf("{%d}", Vdois[v]);

    printf("\nConc:\n");
    for(w = 0; w < 50; w++)
    printf("{%d}", Vconc[w]);
   
    printf("\nTamanho dos vetores:\n [%d]\n [%d]\n [%d]\n", (int)( sizeof(Vum) / sizeof(Vum[0])), (int)( sizeof(Vdois) / sizeof(Vdois[0])), (int)( sizeof(Vconc) / sizeof(Vconc[0])));


}