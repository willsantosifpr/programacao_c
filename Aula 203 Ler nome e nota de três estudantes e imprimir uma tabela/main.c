#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/27/2023

int main()
{
    char nomes[3][35];
    float notas[3];

    for(int i=0; i<3; i++)
    {
        printf("Digite nome e nota do estudante: ");
        scanf("%s%f", &nomes[i], &notas[i]);
    }

    printf("\n\tNOME\tNOTA\n");
    for(int i=0; i<3; i++)
    {
        printf("\t%s\t%.2f\n", nomes[i], notas[i]);
    }

    return 0;
}
