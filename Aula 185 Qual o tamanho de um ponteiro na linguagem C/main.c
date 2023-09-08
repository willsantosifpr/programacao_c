#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/8/2023

int main()
{
    int *p, variavel;
    char *p2, variavel2;
    double *p3, variavel3;

    printf("Tamanho: %d\n", sizeof(variavel));
    printf("Tamanho: %d\n", sizeof(variavel2));
    printf("Tamanho: %d\n", sizeof(variavel3));

    printf("\nTamanho: %d\n", sizeof(p));
    printf("Tamanho: %d\n", sizeof(p2));
    printf("Tamanho: %d\n", sizeof(p3));

    // Endereco de memoria vai ter sempre o mesmo tamanho.

    return 0;
}
