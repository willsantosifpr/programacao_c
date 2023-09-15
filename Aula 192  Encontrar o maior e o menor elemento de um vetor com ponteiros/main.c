#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/15/2023

void maiorMenor(int vet[], int tam, int *maior, int *menor)
{
    *maior = vet[0];
    *menor = vet[0];

    for(int i=1; i<tam; i++)
    {
        if(vet[i] > *maior)
        {
            *maior = vet[i];
        }
        if(vet[i] < *menor)
        {
            *menor = vet[i];
        }
    }
}

int main()
{
    int vet[7] = {5, 1, 7, 45, 16, 9, 2};
    int tam = sizeof(vet) / sizeof(vet[0]);
    int maior, menor;

    printf("Maior = %d\nMenor: %d\n", maior, menor); //imprime lixo de memoria

    maiorMenor(vet, tam, &maior, &menor);

    printf("Maior = %d\nMenor: %d\n", maior, menor);//imprime o maior e menor elemento

    return 0;
}
