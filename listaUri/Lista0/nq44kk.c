#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, m, j, x;
    scanf("%d", &n);
    static char lingua[30][100];
    static char traducao[30][100];

    getchar();
    for (i = 0; i < n; i++)
    {
        fgets(lingua[i], 30, stdin);
        fgets(traducao[i], 30, stdin);
    }

    scanf("%d", &m);
    static char crianca[100][30];
    static char linguaCrianca[100][30];
    getchar();
    for (i = 0; i < m; i++)
    {
        fgets(crianca[i], 30, stdin);
        fgets(linguaCrianca[i], 30, stdin);
    }
    for (j = 0; j < i; j++)
    {
        printf("%s", crianca[j]);
        for (x = 0; x < i; x++)
        {
            if (strcmp(linguaCrianca[j], lingua[x]) == 0)
            {
                printf("%s\n", traducao[x]);
                break;
            }
        }
    }
}