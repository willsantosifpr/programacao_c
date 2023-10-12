#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//William Cardoso da Silva Santos - Oct/12/2023

void escrever(char f[])
{
    FILE *file = fopen(f, "w");
    char texto[500];

    if(file)
    {
        printf("Digite uma frase ou 1 caracter apenas para finalizar:\n");
        scanf("%500[^\n]", texto);
        getchar();

        while(strlen(texto) > 1)
        {
            fputs(texto, file);
            fputc('\n', file);

            scanf("%500[^\n]", texto);
            getchar();
        }

        fclose(file);
    }
    else
    {
        printf("\n---> Erro ao abrir arquivo!\n");
    }
}

void ler(char f[])
{
    FILE *file = fopen(f, "r");
    char texto[500];

    if(file)
    {
        printf("\tTexto lido do arquivo:\n\n");
        while(!feof(file))
        {
            if(fgets(texto, 500, file))
            {
                printf("---> %s", texto);
            }
        }
        fclose(file);
    }
    else
    {
        printf("\n---> Erro ao abrir arquivo!\n");
    }
}

int main()
{
    char texto[] = {"conto.txt"};

    escrever(texto);

    ler(texto);

    return 0;
}
