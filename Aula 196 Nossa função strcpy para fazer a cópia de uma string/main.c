#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/16/2023

/*
    Implemento da função strcpy (char *destino, char *origem) usando ponteiros.
*/

int strcpy(char *origem, char *destino)
{
    int i = 0;

    while(*(origem + i) != '\0')
    {
        *(destino + i) = *(origem + i);
        i++;
    }
    *(destino + i) = '\0';
    return i;
}

int main()
{
    char origin[25] = {"Good evenig!!!!"}, destiny[25];

    printf("Qunatidade de caracteres na string: %d\n", strcpy(origin, destiny));
    printf("Conteudo de destiny: %s\n", destiny);

    return 0;
}
