#include <stdio.h>

int main()
{
    char linha[101];
    int i, lado1, lado2;

    while (scanf("%s", &linha) != EOF)
    {
        lado1 = 0;
        lado2 = 0;
        for (i = 0; linha[i] != ' '; i++)
        {
            if (linha[i] == '(')
                lado1++;
            else if (linha[i] == ')')
            {
                lado2++;
                if (lado1 > 0)
                {
                    lado1--;
                    lado2--;
                }
            }
        }
        if (lado1 == 0 && lado2 == 0)
            printf("correct\n");
        else
            printf("incorrect\n");
    }
    return 0;
}