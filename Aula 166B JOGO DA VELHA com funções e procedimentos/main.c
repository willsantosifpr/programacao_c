#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Jun/9/2023 <> Jun/13/2023

// Jogo da Velha

char jogo[3][3];
int l, c;

void inicializarMatriz()
{
    for(l=0; l<3; l++)
    {
        for(c=0; c<3; c++)
        {
            jogo[l][c] = ' ';
        }
    }
}

void imprimir()
{
    printf("\n\n\t\t    0   1   2\n\n");
    for(l=0; l<3; l++)
    {
        printf("\t\t%d  ", l);
        for(c=0; c<3; c++)
        {
            printf(" %c ", jogo[l][c]);
            if(c<2)
            {
                printf("|");
            }
        }
        printf("\n");
        if(l<2)
        {
            printf("\t\t   -----------\n");
        }
    }
}

int ganhouPorLinha(int l, char caractere)
{
    if(jogo[l][0]==caractere && jogo[l][1]==caractere && jogo[l][2]==caractere)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int ganhouPorLinhas(char caractere)
{
    int ganhou = 0;
    for(l=0; l<3; l++)
    {
        ganhou += ganhouPorLinha(l, caractere);
    }
    return ganhou;
}

int ganhouPorColuna(int c, char caractere)
{
    if(jogo[0][c]==caractere && jogo[1][c]==caractere && jogo[2][c]==caractere)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int ganhouPorColunas(char caractere)
{
    int ganhou = 0;
    for(c=0; c<3; c++)
    {
        ganhou += ganhouPorColuna(c, caractere);
    }
    return ganhou;
}

int ganhouPorDiagonalPrin(char caractere)
{
    if(jogo[0][0]==caractere && jogo[1][1]==caractere && jogo[2][2]==caractere)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int ganhouPorDiagonalSec(char caractere)
{
    if(jogo[0][2]==caractere && jogo[1][1]==caractere && jogo[2][0]==caractere)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int ehValida(int l, int c)
{
    if(l>=0 && l<3 && c>=0 && c<3 && jogo[l][c]== ' ')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void lerCoordenadas(char caractere)
{
    int linha, coluna;

    printf("Digite linha e coluna:\n");
    scanf("%d%d", &linha, &coluna);

    while(ehValida(linha, coluna) == 0)
    {
        printf("Coordenadas invalidas!!\nDigite outra linha e coluna:\n");
        scanf("%d%d", &linha, &coluna);
    }
    jogo[linha][coluna] = caractere;
}

int quantVazias()
{
    int quantidade = 0;

    for(l=0; l<3; l++)
    {
        for(c=0; c<3; c++)
        {
            if(jogo[l][c]==' ')
            {
                quantidade++;
            }
        }
    }
    return quantidade;
}

void jogar()
{
    int jogador = 1, vitoriaX = 0, vitoriaO = 0;
    char jogador1 = 'X', jogador2 = 'O';

    do
    {
        imprimir();
        if(jogador==1)
        {
            lerCoordenadas(jogador1);
            jogador++;
            vitoriaX += ganhouPorLinhas(jogador1);
            vitoriaX += ganhouPorColunas(jogador1);
            vitoriaX += ganhouPorDiagonalPrin(jogador1);
            vitoriaX += ganhouPorDiagonalSec(jogador1);
        }
        else
        {
            lerCoordenadas(jogador2);
            jogador = 1;
            vitoriaO += ganhouPorLinhas(jogador2);
            vitoriaO += ganhouPorColunas(jogador2);
            vitoriaO += ganhouPorDiagonalPrin(jogador2);
            vitoriaO += ganhouPorDiagonalSec(jogador2);
        }

    }while(vitoriaX==0 && vitoriaO==0 && quantVazias>0);

    imprimir();

    if(vitoriaX==1)
    {
        printf("\nParabens Jogador 1. Voce venceu!!!\n");
    }
    else if(vitoriaO==1)
    {
        printf("\nParabens Jogador 2. Voce venceu!!!\n");
    }
    else
    {
        printf("\nQue pena. Ninguem ganhou.\n");
    }

}

int main()
{
    int opcao;

    do
    {
        inicializarMatriz();
        jogar();

        printf("\nDigite 1 para jogar novamente ou 0 para sair: ");
        scanf("%d", &opcao);
    } while(opcao == 1);

    printf("\nObrigado!!!\n");

    return 0;
}
