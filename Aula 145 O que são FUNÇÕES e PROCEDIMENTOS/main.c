#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include <string.h>

//William Cardoso da Silva Santos - Oct/17/2022

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tam;

    tam = printf("Hello");
    tam = strlen("oi!!");

    printf("\nTamanho: %d\n", tam);
    printf("Tamanho: %d\n", strlen("oi"));

    return 0;
}
