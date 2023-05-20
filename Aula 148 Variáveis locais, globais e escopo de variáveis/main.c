#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//William Cardoso da Silva Santos - Oct/22/2022

int idade2 = 35;

void printAge(int age)
{
    age++;
    idade2++;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade = 25;

    printf("\nIdade: %d anos\n", idade);
    printf("\nIdade2: %d anos\n", idade2);

    printAge(idade);

    printf("\nIdade: %d anos\n", idade);
    printf("\nIdade2: %d anos\n", idade2);

    getchar();

    return 0;
}
