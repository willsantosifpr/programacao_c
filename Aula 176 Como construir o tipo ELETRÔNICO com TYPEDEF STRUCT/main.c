#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//William Cardoso da Silva Santos - Aug/19/2023

typedef struct
{
    char tipo[100];
    char marca[50];
    char modelo[25];
    char energia;
    char descricao[500];
    int quantidade;
    int codigo;

}Eletronico;

void imprimirEletronico(Eletronico eletro)
{
    printf("\tTipo: %s\n", eletro.tipo);
    printf("\tMarca: %s\n", eletro.marca);
    printf("\tModelo: %s\n", eletro.modelo);
    printf("\tEnergia: %c\tQuantidade: %d\n", eletro.energia, eletro.quantidade);
    printf("\tDescricao: %s\n", eletro.descricao);
}

//Funcao que le os dados de um eletronico e retorna para quem chamou
Eletronico lerEletronico()
{
    Eletronico eletro;

    printf("Digite o tipo de eletronico: ");
    fgets(eletro.tipo, 100, stdin);

    //Comando para tirar o \n do fgets
    eletro.tipo[strlen(eletro.tipo)-1] = '\0';

    printf("Digite a marca: ");
    fgets(eletro.marca, 50, stdin);

    eletro.marca[strlen(eletro.marca)-1] = '\0';

    printf("Digite o modelo: ");
    fgets(eletro.modelo, 25, stdin);

    eletro.modelo[strlen(eletro.modelo)-1] = '\0';

    printf("Digite a classificacao energetica do eletronico: ");
    scanf("%c", &eletro.energia);

    getchar();/*Usar a funcao getchar() para consumir o enter buffer
    ou usar scanf("%c") no lugar*/

    printf("Descricao do eletronico: ");
    fgets(eletro.descricao, 500, stdin);

    eletro.descricao[strlen(eletro.descricao)-1] = '\0';

    printf("Digite a quantidade: ");
    scanf("%d", &eletro.quantidade);
    printf("\n");

    return eletro;
}

int main()
{
    Eletronico eletro1;

    //Coleta dos dados
    eletro1 = lerEletronico();

    //Impressao dos dados
    imprimirEletronico(eletro1);

    return 0;
}
