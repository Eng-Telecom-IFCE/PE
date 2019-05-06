#include <stdio.h>


int pesquisalinear(int arr[], int n, int x){
    int i;
    for(i = 0; i < n; i++)
        if(arr[i] == x)
            return i;
        return -1;
    
}

int PesquisaBinaria (int vet[], int chave, int Tam)
{
     int inf = 0;     // limite inferior (o primeiro índice de vetor em C é zero          )
     int sup = Tam-1; // limite superior (termina em um número a menos. 0 a 9 são 10 números)
     int meio;
     while (inf <= sup)
     {
          meio = (inf + sup)/2;
          if (chave == vet[meio])
               return meio;
          if (chave < vet[meio])
               sup = meio-1;
          else
               inf = meio+1;
     }
     return -1;   // não encontrado
}


