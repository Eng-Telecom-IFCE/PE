#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;

    scanf("%d",&n);
    printf("\nAntecessores de n:\n%d & %d", n-1, n-2);
    printf("\nSucessores de n:\n%d & %d", n+1, n+2);
    
}
