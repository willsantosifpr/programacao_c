#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/15/2023

void troca(float *a, float *b)
{
    float temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    float num1 = 0.99, num2 = 1.99;

    printf("ANTES DO PROCEDIMENTO\n");
    printf("num1: %.2f \tnum2: %.2f\n", num1, num2);

    troca(&num1, &num2);

    printf("\nDEPOIS DO PROCEDIMENTO\n");
    printf("num1: %.2f \tnum2: %.2f\n", num1, num2);

    return 0;
}
