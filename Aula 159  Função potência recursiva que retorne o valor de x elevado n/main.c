#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - May/23/2023

int potencia(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return x * potencia(x, n-1);
    }
}

int main()
{
    int x, n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite um outro numero inteiro: ");
    scanf("%d", &n);

    printf("%d elevado a %d eh: %d\n", x, n, potencia(x, n));

    getchar();

    return 0;
}
