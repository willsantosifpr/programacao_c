#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - May/20/2023

void imprimir(int x)
{
    if(x == 0)
    {
        printf("%d ", x);
    }
    else
    {
        printf("%d ", x); // Esta linha quando comentada, imprime na ordem crescente
        imprimir(x-1);
        //printf("%d ", x);
    }
}

int main()
{
    int n;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    imprimir(n);

    getchar();

    return 0;
}
