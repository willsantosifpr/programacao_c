#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/8/2023

int main()
{
    char palavra[100];

    scanf("%100[^\n]", palavra);
    printf("%s\n\n", palavra);

    printf("%p\n", palavra);
    printf("%p\n", &palavra);
    printf("%p\n", &palavra[0]);

    // Vetor eh um ponteiro

    return 0;
}
