#include <iostream>

using namespace std;

int main()
{
    int n, m;
    char lingua[50];
    char mensagem[50];
    char nome[50];

    for (int i = 0; i < n; i++)
    {
        getline(cin, lingua);
        getline(cin, mensagem);
        m[lingua] = mensagem; //m é o map
    }
    for (j = 0; j < m; j++)
    {
        getline(cin, nome);
        getline(cin, lingua);
        cout << nome << "\n";
        cout << m[lingua] << "\n";
    }
}