#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/9/2023

void test(int vet[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        vet[i] = vet[i] * 2;
    }
    printf("\n");
}

void imprimirVet(int vet[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main()
{
    int vet[10] = {12, 54, 34, 21, 07, 16, 02, 98, 60, 10};

    imprimirVet(vet, 10);
    test(vet, 10);
    imprimirVet(vet, 10);

    return 0;
}
