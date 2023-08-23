#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//William Cardoso da Silva Santos - Aug/23/2023

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

int main()
{
    inicializarJogo();

    sortearBombas(10);

    return 0;
}
