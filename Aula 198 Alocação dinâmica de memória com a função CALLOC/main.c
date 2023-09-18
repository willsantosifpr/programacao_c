#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/18/2023

int main()
{
    char *x;

    //x = malloc(sizeof(int));

    x = calloc(1, sizeof(char));

    if(x)
    {
        printf("Memoria alocada com sucesso!\n");
        printf("X: %c\n", *x);
        *x = 'W';
        printf("X: %c\n", *x);
    }
    else
    {
        printf("Erro ao alocar memoria!\n");
    }

    return 0;
}
