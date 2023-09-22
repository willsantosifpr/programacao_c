#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//William Cardoso da Silva Santos - Sep/22/2023

int main()
{
    int tam, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(tam * sizeof(int));

    if(vet)
    {
        printf("\nMemoria alocada com sucesso!\n");
        for(int i=0; i<tam; i++)
        {
            *(vet + i) = rand() % 100;
        }
        for(int i=0; i<tam; i++)
        {
            printf("%d ", *(vet + i));
        }
        printf("\n");

        printf("\nDigite o novo tamanho do vetor: ");
        scanf("%d", &tam);

        vet = realloc(vet, tam * sizeof(int));

        printf("\nVetor realocado:\n");
        for(int i=0; i<tam; i++)
        {
            printf("%d ", *(vet + i));
        }
        printf("\n");
    }
    else
    {
        printf("Erro ao alocar memoria!\n");
    }

    return 0;
}
