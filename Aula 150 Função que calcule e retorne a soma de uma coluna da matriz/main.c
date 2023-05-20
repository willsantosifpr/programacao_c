#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include <math.h>
#include <time.h>

//William Cardoso da Silva Santos - Oct/29/2022

int tamanho = 5;
int mat[5][5];

void printMat()
{
    int i, j;
    for(i=0; i<tamanho; i++)
    {
        for(j=0; j<tamanho; j++)
        {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Funcao que calcula e retorna a soma de uma linha da matriz.
int somarLinha(int l)
{
    int c, soma = 0;

    for(c=0; c<tamanho; c++)
    {
        soma = soma + mat[l][c];
    }
    return soma;
}

// Funcao que calcula e retorna a soma de uma coluna da matriz.
int somarColuna(int c)
{
    int l, soma = 0;

    for(l=0; l<tamanho; l++)
    {
        soma = soma + mat[l][c];
    }
    return soma;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        for(j=0; j<tamanho; j++)
        {
            mat[i][j] = rand() % 10;
        }
    }

    printMat();

    printf("\n");

    for(i=0; i<tamanho; i++)
    {
        printf("A soma da linha %d eh: %2d\n", i, somarLinha(i));
    }

    printf("\n\n");

    for(i=0; i<tamanho; i++)
    {
        printf("A soma da coluna %d eh: %2d\n", i, somarColuna(i));
    }

    getchar();

    return 0;
}
