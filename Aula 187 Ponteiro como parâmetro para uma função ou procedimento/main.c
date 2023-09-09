#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/9/2023

void imprimirIdade(int *num)
{
    printf("%d\n", *num);
    *num = 70;
}

int main()
{
    int idade = 25;

    imprimirIdade(&idade);
    printf("No main: %d\n", idade);

    return 0;
}
