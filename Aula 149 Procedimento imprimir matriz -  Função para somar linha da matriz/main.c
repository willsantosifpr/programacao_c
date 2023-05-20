#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include <math.h>
#include <time.h>

//William Cardoso da Silva Santos - Oct/22/2022 <> Oct/29/2022

int tamanho = 5;

void printMat(int mat[][5])
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
int somarLinha(int x[][5], int l)
{
    int c, soma = 0;

    for(c=0; c<tamanho; c++)
    {
        soma = soma + x[l][c];
    }
    return soma;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int mat[5][5];
    int i, j;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        for(j=0; j<tamanho; j++)
        {
            mat[i][j] = rand() % 10;
        }
    }

    printMat(mat);
    printf("\n");

    for(i=0; i<tamanho; i++)
    {
        printf("A soma da linha %d eh: %d\n", i, somarLinha(mat, i));
    }

    getchar();

    return 0;
}
