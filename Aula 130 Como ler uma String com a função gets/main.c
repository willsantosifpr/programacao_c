#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//William Cardoso da Silva Santos - Nov/7/2022

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavras[10] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    //scanf("%10[^\n]", palavras);
    gets(palavras); // funcao nunca recomendada.

    printf("%s\n", palavras);

    getchar();

    return 0;
}
