#include <stdio.h>
#define MAX 1010

int pilha[MAX], indice_do_topo_da_pilha = -1;

void empilhar(int x){
    indice_do_topo_da_pilha++;
    pilha[indice_do_topo_da_pilha] = x;
}

void desempilhar(){
    indice_do_topo_da_pilha--;
}

int vazia(){
    return (indice_do_topo_da_pilha == -1 ?  1 : 0); 
}

int topo(){
    return ( vazia() ? -1 : pilha[indice_do_topo_da_pilha] );
}

int main() {
    int numero_de_vagoes;

    while(scanf("%d", &numero_de_vagoes) && numero_de_vagoes != 0) {
        int vagoes[MAX];
        int i, j;
        
        while(1){
            indice_do_topo_da_pilha = -1;
            scanf("%d", &vagoes[0]);

            if(vagoes[0] == 0)
                break;
            
            for(i=1; i<numero_de_vagoes; i++)
                scanf("%d", &vagoes[i]);
           
            for(i=numero_de_vagoes, j=numero_de_vagoes-1; i>0; i--) {
                while(j>=0 && topo() != i) {
                    empilhar(vagoes[j]);
                    j--;
                }
                if(topo() == i)
                    desempilhar();
                else
                    break;
            }

            printf("%s\n", (vazia() ? "Yes" : "No"));
        }
        printf("\n");
    }

    return 0;
}
