#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - May/23/2023  1 2 3 4 5

int soma(int n)
{
    if(n==0)
    {
        return n;
    }
    else
    {
        return n + soma(n-1);
    }
}

int main()
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("A soma de todos os numeros de 0 ate %d eh: %d\n", n, soma(n));

    getchar();

    return 0;
}
