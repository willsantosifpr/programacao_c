#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - May/30/2023

void binario(int n)
{
    // Caso base: o numero eh zero
    if(n==0)
    {
        printf("%d", n);
    }
    else
    {
        // Chamada recursiva para converter a parte inteira do numero
        binario(n/2);
        // Imprime o digito binario correspondente ao resto da divisao por 2
        printf("%d", n%2);
    }
}

int main()
{
    int decimal;

    printf("Digite um valor decimal: ");
    scanf("%d", &decimal);

    printf("O numero %d em binario eh ", decimal);
    binario(decimal);

    getchar();

    return 0;
}
