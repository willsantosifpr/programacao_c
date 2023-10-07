#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Oct/7/2023

int main()
{
    FILE *file;
    char letra;

    file = fopen("conto.txt", "w");

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
        printf("\n\t-----> Erro ao abrir arquivo!\n");
    }

    return 0;
}
