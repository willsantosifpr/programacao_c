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

void ler(char arquivo[])
{
    Contato c;
    FILE *file = fopen(arquivo, "rb");

    if(file)
    {
        while(!feof(file))
        {
            if(fread(&c, sizeof(Contato), 1, file))
            {
                printf("\nNome: %s\n", c.nome);
                printf("Data de Nascimento: %d/%.2d/%d\n", c.dia, c.mes, c.ano);
            }
        }
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

    ler(arquivo);

    return 0;
}
