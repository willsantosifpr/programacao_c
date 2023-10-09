#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Oct/9/2023

void escrever(char f[])
{
    char letra;
    FILE *file = fopen(f, "w");

    if(file)
    {
        printf("Digite um texto e pressione enter ao finalizar:\n");
        scanf("%c", &letra);
        while(letra != '\n')
        {
            fputc(letra, file);
            scanf("%c", &letra);
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
    char letra;
    FILE *file = fopen(f, "r");

    if(file)
    {
        printf("\nTexto lido do arquivo:\n\n");
        while(!feof(file))
        {
            letra = fgetc(file);
            printf("%c", letra);
        }
        printf("\n");
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
