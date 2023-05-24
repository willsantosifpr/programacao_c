#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - May/24/2023

int soma(int vet[], int tam)
{
    if(tam==0)
    {
        return 0;
    }
    else
    {
        return vet[tam-1] + soma(vet, tam-1);
    }
}

int main()
{
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("A soma dos elementos do vetor eh %d\n", soma(vet, 10));

    getchar();

    return 0;
}
