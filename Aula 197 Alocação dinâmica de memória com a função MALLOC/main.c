#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/18/2023

int main()
{
    int *x;

    x = malloc(sizeof(int));

    if(x)
    {
        printf("Memoria alocada com sucesso!\n");
        printf("X: %d\n", *x);
        *x = 50;
        printf("X: %d\n", *x);
    }
    else
    {
        printf("Erro ao alocar memoria!\n");
    }

    return 0;
}
