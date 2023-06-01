#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//William Cardoso da Silva Santos - Jun/1/2023

long long int fiboR(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fiboR(n-1) + fiboR(n-2);
    }
}

long long int fiboI(int n)
{
    long long int a = 0, b = 1, c;
    int i = 2;
    if(n==1)
    {
        return a;
    }
    else if(n==2)
    {
        return b;
    }
    else
    {
        while(i < n)
        {
            c = a+b;
            a = b;
            b = c;
            i++;
        }
        return c;
    }
}

int main()
{
    int n;

    // time_t eh um tipo de dado para receber a hora do computador
    time_t tIni, tFim;

    printf("Digite o enesimo termo fibonacci: ");
    scanf("%d", &n);

    tIni = time(NULL); //Para obter a hora do computador
    printf("Fibonacci iterativo: %lld\n", fiboI(n));
    tFim = time(NULL);

    // difftime: funcao que calcula a diferenca de tempo
    printf("\tTempo em segundos: %f\n\n", difftime(tFim, tIni));

    tIni = time(NULL);
    printf("Fibonacci recursivo: %lld\n", fiboR(n));
    tFim = time(NULL);

    printf("\tTempo em segundos: %f\n\n", difftime(tFim, tIni));

    getchar();

    return 0;
}
