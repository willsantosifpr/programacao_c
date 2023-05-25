#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - May/25/2023

int maior(int vet[], int tam, int indice)
{
    // O codigo comentado foi a forma que eu resolvi o problema sem ter visto a solucao dada pelo professor
/*
    if(tam==0)
    {
        return vet[indice];
    }
    else if(vet[tam-1] > vet[indice])
    {
        vet[indice] = vet[tam-1];
        return maior(vet, tam-1, indice);
    }
    else
    {
        return maior(vet, tam-1, indice);
    }
*/
    // A solucao dada pelo professor
    if(tam==0)
    {
        return vet[indice];
    }
    else if(vet[tam-1] > vet[indice])
    {
        return maior(vet, tam-1, tam-1);
    }
    else
    {
        return maior(vet, tam-1, indice);
    }
}

int main()
{
    int vet[10] = {15, 35, 7, 2, 99, 11, 124, 29, 24, 1};

    printf("O maior elemento do vetor eh %d\n", maior(vet, 10, 0));

    return 0;
}
