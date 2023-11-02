#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/2/2023

int main()
{
    char nome[] = {"conto.txt"};

    FILE *file = fopen(nome, "r");

    if(file)
    {
        printf("Arquivo aberto com sucesso!!!\n");
        fclose(file);

        printf("Retorno: %d\n", remove(nome));
    }
    else
    {
        printf("Nao foi possivel abrir o arquivo!\n");
        printf("Retorno: %d\n", remove(nome));
    }

    return 0;
}
