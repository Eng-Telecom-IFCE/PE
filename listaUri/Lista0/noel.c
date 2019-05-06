#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    char lingua [n][30];
    char traducao [n][30];

    for (int i = 0; i < n; n++)
    {

        gets(lingua[i]);
        gets(traducao[i]);
    }

    printf("%s\n%s\n", lingua, traducao);
}
