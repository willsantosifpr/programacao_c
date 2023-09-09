#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Sep/9/2023

typedef struct
{
    int dia, mes, ano;

}Data;

void imprimirNascimento(Data *x)
{
    printf("%d/%d/%d\n", x->dia, x->mes, x->ano);
}

int main()
{
    Data nascimento;
    Data *p;

    p = &nascimento;

    printf("nascimento: %p\tp: %p\n", &nascimento, p);

    nascimento.dia = 10;
    nascimento.mes = 7;
    nascimento.ano = 1996;

    imprimirNascimento(p);

    printf("%d/%d/%d\n", nascimento.dia, nascimento.mes, nascimento.ano);

    return 0;
}
