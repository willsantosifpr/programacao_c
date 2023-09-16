#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/16/2023

/*
    Considere a seguinte declaração: int A, *B, **C, ***D.
    Escreva um programa que leia a variável A e calcule e exiba o dobro,
    o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D.
    O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o quádruplo.
*/

int main()
{
    int A, *B, **C, ***D;

    printf("Digite um numero inteiro: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    printf("\nO dobro de %d eh %d\n", A, *B * 2);
    printf("O triplo de %d eh %d\n", A, **C * 3);
    printf("O quadruplo de %d eh %d\n", A, ***D * 4);

    return 0;
}
