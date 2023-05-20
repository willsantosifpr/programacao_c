#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - May/20/2023

/*
    4! = 4 * 3 * 2 * 1 = 24
    1! e 0! = 1
*/

int fatorial(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        // Exemplo: 5 * 4!
        return n * fatorial(n-1);
    }
}

int main()
{
    int n, fatorialResult;

    printf("Digite um numero: ");
    scanf("%d", &n);

    fatorialResult = fatorial(n);

    printf("O fatorial de %d eh %d\n", n, fatorialResult);

    getchar();

    return 0;
}
