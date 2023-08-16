#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//William Cardoso da Silva Santos - Aug/16/2023

typedef struct
{
    int dia, mes, ano;

}DataNascimento;

typedef struct
{
    DataNascimento nascimento;

    int idade;
    char sexo;
    char nome[100];

}Pessoa;

void imprimirPessoa(Pessoa p1)
{
    printf("\n\tNome: %s", p1.nome);
    printf("\tIdade: %d\n", p1.idade);
    printf("\tSexo: %c\n", p1.sexo);
    printf("\tData de Nascimento: %d/%d/%d\n", p1.nascimento.dia, p1.nascimento.mes, p1.nascimento.ano);
}

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
    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &pessoa1.nascimento.dia, &pessoa1.nascimento.mes, &pessoa1.nascimento.ano);

    getchar();/*Usar a funcao getchar() para consumir o enter
    ou usar scanf("%c") no lugar*/


    // Impressao das informacoes

    imprimirPessoa(pessoa1);

    return 0;
}
