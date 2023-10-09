#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//William Cardoso da Silva Santos - Oct/9/2023

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

int main()
{
    char texto[] = {"conto.txt"};

    escrever(texto);

    return 0;
}
