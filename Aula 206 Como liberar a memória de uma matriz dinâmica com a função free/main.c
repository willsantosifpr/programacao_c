#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//William Cardoso da Silva Santos - Oct/5/2023

int main()
{
    int linhas = 4;
    int colunas = 3;
    int **mat, i, j;

    // Aloque memoria para o array de ponteiros
    mat = malloc(linhas * sizeof(int*));

    if (mat == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    // Aloque memoria para cada linha da matriz
    for(i=0; i<linhas; i++)
    {
        mat[i] = malloc(colunas * sizeof(int));

        if (mat[i] == NULL) {
            printf("Erro na alocacao de memoria para a linha %d.\n", i);
            return 1;
        }
    }

    srand(time(NULL));

    // Preencher a matriz com dados
    for(i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
        {
            *(*(mat + i) + j) = rand() % 100;
            //mat[i][j] = rand() % 100;
        }
    }

    // Imprimir dados na tela
    for(i=0; i<linhas; i++)
    {
        for(j=0; j<colunas; j++)
        {
            printf("%.2d ", *(*(mat + i) + j));
            //printf("%.2d ", mat[i][j]);
        }
        printf("\n");
    }

    //Liberar memoria da matriz
    for(i=0; i<linhas; i++)
    {
        free(mat[i]);
    }
    free(mat);

    return 0;
}
