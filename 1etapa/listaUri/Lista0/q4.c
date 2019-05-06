#include <stdio.h>
#include <string.h>
typedef struct
{
    char lingua[100];
    char mens[100];

} Dicionario;

Dicionario dic[100];

typedef struct
{
    char crianca[100];
    char cLingua[100];

} Crianca;

Crianca cri[100];

int main()
{
    int m, n;


    scanf("%d", &m);
    fflush(stdin);
    int i;
    for (i = 0; i < m; i++)
    {
        gets(dic[i].lingua);
        gets(dic[i].mens);
    }

    scanf("%d", &n);
    fflush(stdin);
    int j;
    for (j = 0; j < n; j++)
    {
        gets(cri[j].crianca);
        gets(cri[j].cLingua);
    }
    int k;
    for (k = 0; k < n; k++)
    {
        char mensagem[100];
        int l;
        for (l = 0; l < m; l++)
        {
            if(strcmp(cri[k].cLingua, dic[l].lingua) == 0)
            {
                strcpy(mensagem, dic[l].mens);
                break;
            }
        }

        printf("%s\n%s\n\n", cri[k].crianca, mensagem);
    }
}