#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//William Cardoso da Silva Santos - Nov/2/2022

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavras[] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("%s\n", palavras);

    getchar();

    return 0;
}
