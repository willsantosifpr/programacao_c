#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//William Cardoso da Silva Santos - Aug/25/2023

/*
    CELULA
    ehBomba 0 ou 1
    estaAberta 0 ou 1
    vizinhos 0 a 4
*/
typedef struct
{
    int ehBomba;
    int estaAberta;
    int vizinhos;

}Celula;

// Variaveis globais
Celula jogo[10][10];
int l, c, tam = 10;

// Procedimento para inicializar a matris jogo
void inicializarJogo()
{
    for(l= 0; l<tam; l++)
    {
        for(c=0; c<tam; c++)
        {
            jogo[l][c].ehBomba = 0;
            jogo[l][c].estaAberta = 0;
            jogo[l][c].vizinhos = 0;
        }
    }
}

// Procedimento para sortear N bombas
void sortearBombas(int n)
{
    int i;
    srand(time(NULL));
    for(i=1; i<=n; i++)
    {
        l = rand() % tam;
        c = rand() % tam;
        if(jogo[l][c].ehBomba == 0)
        {
            jogo[l][c].ehBomba = 1;
        }
        else
        {
            i--;
        }
    }
}

/*  Funcao que diz se um par de coordenadas eh valido ou nao
    1 == eh valido
    0 == nao eh valido*/
int coordenadaEhValida(int l, int c)
{
    if(l >= 0 && l < tam && c >= 0 && c < tam)
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
}

/*  Funcao que retorna a quantidade de bombas na vizinhanca de l c
    N == quantidade de bombas */
int quantBombasVizinhas(int l, int c)
{
    /*  l - 1 e c
        l + 1 e c
        l e c + 1
        l e c - 1
    */

    int quantidade = 0;

    if(coordenadaEhValida(l-1, c) && jogo[l-1][c].ehBomba)
    {
        quantidade++;
    }
    if(coordenadaEhValida(l+1, c) && jogo[l+1][c].ehBomba)
    {
        quantidade++;
    }
    if(coordenadaEhValida(l, c+1) && jogo[l][c+1].ehBomba)
    {
        quantidade++;
    }
    if(coordenadaEhValida(l, c-1) && jogo[l][c-1].ehBomba)
    {
        quantidade++;
    }

    return quantidade;
}

// Procedimento para contar as bombas vizinhas
void contarBombas()
{
    for(l=0; l<tam; l++)
    {
        for(c=0; c<tam; c++)
        {
            jogo[l][c].vizinhos = quantBombasVizinhas(l, c);
        }
    }
}

// Procedimento para imprimir o jogo
void imprimirJogo()
{
    printf("\n\t    ");
    for(l=0; l<tam; l++)
    {
        printf(" %d  ", l); // indices das colunas
    }
    printf("\n\t   -----------------------------------------\n");
    for(l=0; l<tam; l++)
    {
        printf("\t%d  |", l); // indices das linhas
        for(c=0; c<tam; c++)
        {
            if(jogo[l][c].estaAberta)
            {
                if(jogo[l][c].ehBomba)
                {
                    printf(" * ");
                }
                else
                {
                    printf(" %d ", jogo[l][c].vizinhos);
                }
            }
            else
            {
                printf("   ");
            }
            printf("|");
        }
        printf("\n\t   -----------------------------------------\n");
    }

}

int main()
{
    inicializarJogo();

    sortearBombas(10);

    contarBombas();

    printf("\n\t\t\tCAMPO MINADO\n");

    imprimirJogo();

    return 0;
}
