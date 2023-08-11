#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//William Cardoso da Silva Santos - Aug/11/2023

typedef struct
{
    int idade;
    char sexo;
    char nome[100];

}Pessoa;

int main()
{
    Pessoa pessoa1;

    printf("Digite seu nome: ");
    fgets(pessoa1.nome, 100, stdin);

    //Comando para tirar o \n do fgets
    pessoa1.nome[strlen(pessoa1.nome)-1] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);

    getchar();/*Usar a funcao getchar() para consumir o enter
    ou usar scanf("%c") no lugar*/

    printf("Digite f ou m para o sexo: ");
    scanf("%c", &pessoa1.sexo);

    printf("\nNome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);

    return 0;
}
