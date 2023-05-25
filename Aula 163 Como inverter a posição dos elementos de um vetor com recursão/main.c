#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - May/25/2023

void trocar(int vet[], int inicio, int fim)
{
    int aux;

    if(inicio < fim)
    {
        aux = vet[inicio];
        vet[inicio] = vet[fim];
        vet[fim] = aux;
        trocar(vet, inicio+1, fim-1);
    }
}

void imprimir(int vet[], int tam)
{
    if(tam==1)
    {
        printf("%d, ", vet[tam-1]);
    }
    else
    {
        imprimir(vet, tam-1);
        printf("%d, ", vet[tam-1]);
    }
}

int main()
{
    int vet[10] = {251, 10, 7, 455, 224, 377, 398, 89, 127, 64};

    imprimir(vet, 10);
    printf("\n");

    trocar(vet, 0, 9);

    imprimir(vet, 10);


    return 0;
}
