#include <stdio.h>
#include <stdlib.h>
//função da juncao entre a e 



int main() {
    int x = 0, y = 0, z = 0;
    int um[25] = {1,1,2,1,1,2,1,1,2,1,1,2,1,1,2,1,1,2,1,1,2,1,1,2};
    int dois[25] = {1,1,2,1,1,2,1,1,2,1,1,2,1,1,2,1,1,2,1,1,2,1,1,2};
    int soma[50];
    fjuncao();
   

    printf("\na =\n\n");
    for(x = 0; x < 25; x++)
        printf("%d", um[x]);


    printf("\nb =\n");
    for(y = 0; y < 25; y++)
        printf("%d", dois[y]);

        
    printf("\n Junção a + b:\n c =\n");
    for(z = 0; z < 51; z++)
        printf("%d", soma[z]);


    return fjjuncao();


}