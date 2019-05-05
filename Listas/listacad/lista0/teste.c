#include <stdio.h>
#include <stdlib.h>

int main() {

    int u = 0, v = 0, w = 0;
    int um[25] = {1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1};
    int dois[25] ={1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1,1,1,2,1,1};
    int conc[50];
    

    while(u < 25) {

        conc[w] = um[u];
        u++;
        w++;

    }

    while(v < 25) {

        conc[w] = dois[v];
        v++;
        w++;

    }    
    
    printf("\nUm:\n");
    for(u = 0; u < 25; u++)
    printf("%d",um[u]);

    printf("\nDois:\n");
    for(v = 0; v < 25; v++)
    printf("%d", dois[v]);

    printf("\nConc:\n");
    for(w = 0; w < 50; w++)
    printf("%d", conc[w]);

   
    printf("\nTamanho dos vetores:\n %d\n %d\n %d\n", (int)( sizeof(um) / sizeof(um[0])), (int)( sizeof(dois) / sizeof(dois[0])), (int)( sizeof(conc) / sizeof(conc[0])));


}