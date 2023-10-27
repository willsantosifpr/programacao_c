#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Oct/27/2023

typedef struct
{
    char nome[50];
    int dia, mes, ano;

}Contato;

void escrever(char arquivo[])
{
    Contato c;
    FILE *file = fopen(arquivo, "ab");

    if(file)
    {
        printf("Digite o nome o nome do contato: ");
        scanf("%49[^\n]", c.nome);
        printf("Digite a data de nascimento - dd mm aaaa: ");
        scanf("%d%d%d", &c.dia, &c.mes, &c.ano);

        fwrite(&c, sizeof(Contato), 1, file);
        fclose(file);
    }
    else
    {
        printf("\nErro ao abrir arquivo!\n");
    }

}

int main()
{
    char arquivo[] = {"agenda.dat"};

    escrever(arquivo);

    return 0;
}
