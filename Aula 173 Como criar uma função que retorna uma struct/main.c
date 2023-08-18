#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//William Cardoso da Silva Santos - Aug/18/2023

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

//Funcao que le os dados de uma pessoa e retorna para quem chamou
Pessoa lerPessoa()
{
    Pessoa cliente;

    printf("Digite seu nome: ");
    fgets(cliente.nome, 100, stdin);

    //Comando para tirar o \n do fgets
    cliente.nome[strlen(cliente.nome)-1] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &cliente.idade);

    getchar();/*Usar a funcao getchar() para consumir o enter
    ou usar scanf("%c") no lugar*/

    printf("Digite f ou m para o sexo: ");
    scanf("%c", &cliente.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d%d%d", &cliente.nascimento.dia, &cliente.nascimento.mes, &cliente.nascimento.ano);

    getchar();/*Usar a funcao getchar() para consumir o enter
    ou usar scanf("%c") no lugar*/

    return cliente;
}

int main()
{
    Pessoa cliente1;

    cliente1 = lerPessoa();

    // Impressao das informacoes

    imprimirPessoa(cliente1);

    return 0;
}
