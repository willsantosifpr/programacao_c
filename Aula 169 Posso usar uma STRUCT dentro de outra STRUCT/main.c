#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//William Cardoso da Silva Santos - Aug/11/2023

typedef struct
{
    int cep, numero;
    char rua[100], bairro[100], complemento[100], cidade[100], estado[100];

}Endereco;

typedef struct
{
    int dia, mes, ano;

}DataNascimento;

typedef struct
{
    DataNascimento nascimento;
    Endereco enderecoPessoa;

    int idade;
    char sexo;
    char nome[100];

}Pessoa;

int main()
{
    Pessoa pessoa1;

    //Quantidade de memoria utilizada pela struct
    printf("%d\n", sizeof(Pessoa));

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
    printf("Digite seu endereco...\nCEP: ");
    scanf("%d", &pessoa1.enderecoPessoa.cep);

    getchar();/*Usar a funcao getchar() para consumir o enter
    ou usar scanf("%c") no lugar*/

    printf("Rua: ");
    fgets(pessoa1.enderecoPessoa.rua, 100, stdin);

    //Comando para tirar o \n do fgets
    pessoa1.enderecoPessoa.rua[strlen(pessoa1.enderecoPessoa.rua)-1] = '\0';

    printf("Numero: ");
    scanf("%d", &pessoa1.enderecoPessoa.numero);

    getchar();

    printf("Complemento: ");
    fgets(pessoa1.enderecoPessoa.complemento, 100, stdin);

    pessoa1.enderecoPessoa.complemento[strlen(pessoa1.enderecoPessoa.complemento)-1] = '\0';

    printf("Bairro: ");
    fgets(pessoa1.enderecoPessoa.bairro, 100, stdin);

    pessoa1.enderecoPessoa.bairro[strlen(pessoa1.enderecoPessoa.bairro)-1] = '\0';

    printf("Cidade: ");
    fgets(pessoa1.enderecoPessoa.cidade, 100, stdin);

    pessoa1.enderecoPessoa.cidade[strlen(pessoa1.enderecoPessoa.cidade)-1] = '\0';

    printf("Estado: ");
    fgets(pessoa1.enderecoPessoa.estado, 100, stdin);

    pessoa1.enderecoPessoa.estado[strlen(pessoa1.enderecoPessoa.estado)-1] = '\0';

    // Impressao das informacoes

    printf("\nNome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);
    printf("Data de Nascimento: %d/%d/%d\n", pessoa1.nascimento.dia, pessoa1.nascimento.mes, pessoa1.nascimento.ano);
    printf("CEP: %d\n", pessoa1.enderecoPessoa.cep);
    printf("Rua: %s\n", pessoa1.enderecoPessoa.rua);
    printf("Numero: %d\n", pessoa1.enderecoPessoa.numero);
    printf("Complemento: %s\n", pessoa1.enderecoPessoa.complemento);
    printf("Bairro: %s\n", pessoa1.enderecoPessoa.bairro);
    printf("Cidade: %s\n", pessoa1.enderecoPessoa.cidade);
    printf("Estado: %s\n", pessoa1.enderecoPessoa.estado);

    return 0;
}
