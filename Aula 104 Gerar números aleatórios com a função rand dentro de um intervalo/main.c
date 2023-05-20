#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include <time.h>

//William Cardoso da Silva Santos - Oct/24/2022 <> Oct/25/2022

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    int num2[40];

    srand(time(NULL));

    for(i=0; i<40; i++)
    {
        num2[i] = 1 + rand() % 99;
    }

    printf("\n\n");
    for(i=0; i<40; i++)
    {
        printf("%d ", num2[i]);
    }

    printf("\n\n");

    getchar();

    return 0;
}
