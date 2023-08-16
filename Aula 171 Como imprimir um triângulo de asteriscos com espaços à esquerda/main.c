#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Aug/16/2023

/*
    Triangulo com espacos a esquerda

    |    *
    |   **
    |  ***
    | ****
    |*****

*/

int main()
{
    int n;

    //Primeira solucao
    printf("      *\n");
    printf("     **\n");
    printf("    ***\n");
    printf("   ****\n");
    printf("  *****\n");
    printf(" ******\n");
    printf("*******\n");

    //Segunda Solucao
    printf("\nDigite o valor de N: ");
    scanf("%d", &n);

    printf("\n");
    for(int i=1; i<=n; i++)
    {
        for(int j=n-i; j>=1; j--)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
