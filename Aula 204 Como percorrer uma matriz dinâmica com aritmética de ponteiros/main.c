#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//William Cardoso da Silva Santos - Sep/27/2023

int main()
{
    int **mat, i, j;

    mat = malloc(4 * sizeof(int*));

    for(i=0; i<4; i++)
    {
        mat[i] = malloc(3 * sizeof(int));
    }

    srand(time(NULL));

    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            *(*(mat + i) + j) = rand() % 100;
            //mat[i][j] = rand() % 100;
        }
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%.2d ", *(*(mat + i) + j));
            //printf("%.2d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
