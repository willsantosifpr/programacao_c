#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//William Cardoso da Silva Santos - Nov/7/2022 <> Nov/10/2022

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char palavras[50] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    //scanf("%10[^\n]", palavras);
    //gets(palavras); // funcao nunca recomendada.
    fgets(palavras, 50, stdin);

    printf("%s\n", palavras);

    getchar();

    return 0;
}
