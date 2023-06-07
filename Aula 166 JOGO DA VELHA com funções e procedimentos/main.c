#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Jun/7/2023

//  Jogo da Velha
char jogo[3][3];
int l, c;

//Procedimento para inicializar todas as posicoes da matriz
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

//Procedimento para imprimir o jogo na tela
void imprimir()
{
    printf("\n\n\t\t    0   1   2\n\n");
    for(l=0; l<3; l++)
    {
        printf("\t\t%d  ", l);//Imprime a linha da matriz
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

/*
    Funcao para verificar vitoria por linha
    1 = Ganhou
    0 = Nao ganhou ainda
*/
int ganhouPorLinha(int l, char c)
{
    if(jogo[l][0]==c && jogo[l][1]==c && jogo[l][2]==c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*
    Funcao para verificar vitoria por linhas
    1 = Ganhou
    0 = Nao ganhou ainda
*/
int ganhouPorLinhas(char c)
{
    int ganhou = 0;
    for(l=0; l<3; l++)
    {
        ganhou += ganhouPorLinha(l, c);
    }
    return ganhou;
}

/*
    Funcao para verificar vitoria em uma coluna
    1 = Ganhou
    0 = Nao ganhou ainda
*/
int ganhouPorColuna(int c, char j)
{
    if(jogo[0][c]==j && jogo[1][c]==j && jogo[2][c]==j)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*
    Funcao para verificar vitoria por colunas
    1 = Ganhou
    0 = Nao ganhou ainda
*/
int ganhouPorColunas(char j)
{
    int ganhou = 0;
    for(c=0; c<3; c++)
    {
        ganhou += ganhouPorColuna(c, j);
    }
    return ganhou;
}

/*
    Funcao para verificar vitoria na diagonal principal
    1 = Ganhou
    0 = Nao ganhou
*/
int ganhouPorDiagPrin(char c)
{
    if(jogo[0][0]==c && jogo[1][1]==c && jogo[2][2]==c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*
    Funcao para verificar vitoria na diagonal secundaria
    1 = Ganhou
    0 = Nao ganhou
*/
int ganhouPorDiagSec(char c)
{
    if(jogo[0][2]==c && jogo[1][1]==c && jogo[2][0]==c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*
    Funcao que diz se uma coordenada eh valida ou nao
    1 = Eh valida
    0 = Nao eh valida
*/
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

//Procedimento para ler as coordenadas do jogador
void lerCoordenadas(char caractere)
{
    int linha, coluna;
    printf("Digite linha e coluna:\n");
    scanf("%d%d", &linha, &coluna);

    while(ehValida(linha, coluna) == 0)
    {
        printf("Coordenadas invalidas! Digite outra linha e coluna:\n");
        scanf("%d%d", &linha, &coluna);
    }
    jogo[linha][coluna] = caractere;
}

//Funcao que retorna a quantidade de posicoes vazias
int quantVazias()
{
    int quantidade = 0;

    for(l=0; l<3; l++)
    {
        for(c=0; c<3; c++)
        {
            if(jogo[l][c] == ' ')
            {
                quantidade++;
            }
        }
    }
    return quantidade;
}

//Procedimento jogar com o loop principal do jogo
void jogar()
{
    int jogador = 1, vitoriaX = 0, vitoria0 = 0;
    char jogador1 = 'X', jogador2 = '0';

    do
    {
        imprimir();
        if(jogador==1)
        {
            lerCoordenadas(jogador1);
            jogador++;
            vitoriaX += ganhouPorLinhas(jogador1);
            vitoriaX += ganhouPorColunas(jogador1);
            vitoriaX += ganhouPorDiagPrin(jogador1);
            vitoriaX += ganhouPorDiagSec(jogador1);
        }
        else
        {
            lerCoordenadas(jogador2);
            jogador = 1;
            vitoria0 += ganhouPorLinhas(jogador2);
            vitoria0 += ganhouPorColunas(jogador2);
            vitoria0 += ganhouPorDiagPrin(jogador2);
            vitoria0 += ganhouPorDiagSec(jogador2);
        }
    } while(vitoriaX==0 && vitoria0==0 && quantVazias() > 0);

    imprimir();

    if(vitoriaX==1)
    {
        printf("\nParabens Jogador 1. Voce venceu!!!\n");
    }
    else if(vitoria0==1)
    {
        printf("\nParabens Jogador 2. Voce venceu!!!\n");
    }
    else
    {
        printf("Que pena. Deu empate!\n");
    }
}

int main()
{
    int opcao;

    do
    {
        inicializarMatriz();
        jogar();

        printf("Digite 1 para jogar novamente: ");
        scanf("%d", &opcao);
    } while(opcao == 1);

    printf("Obrigado!!\n");

    return 0;
}
