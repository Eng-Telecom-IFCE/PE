#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\n Digite o n%cmero: ", 163);
    scanf("%d", &n);

    printf("\n Antecessores: %d e %d", n-1, n-2);
    printf("\n Sucessores: %d e %d\n", n+1, n+2);

    return 0;
}
