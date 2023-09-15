#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/15/2023

void imprimir(int vet[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("Conteudo: %d\tEndereco: %p\n", *(vet+i), vet+i);
    }
}

int main()
{
    int vet[10] = {5, 1, 7, 45, 16, 9, 2, 8, 27, 4};

    imprimir(vet, 10);

    return 0;
}
