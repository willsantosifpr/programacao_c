#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/8/2023

int main()
{
    int num = 10;
    int *p;
    char num2 = 'W';
    char *p2;

    p = &num;
    p2 = &num2;

    printf("Conteudo de num: %d\n", num);
    printf("Endereco de num: %p\n", &num);

    printf("\nConteudo de p: %p\n", p);
    printf("Conteudo apontado por p: %d\n", *p);

    printf("\nEndereco de p: %p\n", &p);

    printf("\nConteudo de num2: %c\n", num2);
    printf("Endereco de num2: %p\n", &num2);

    printf("\nConteudo de p2: %p\n", p2);
    printf("Conteudo apontado por p2: %c\n", *p2);

    printf("\nEndereco de p2: %p\n", &p2);

    return 0;
}
