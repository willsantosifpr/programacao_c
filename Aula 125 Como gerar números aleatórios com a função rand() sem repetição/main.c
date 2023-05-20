#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include <time.h>

//William Cardoso da Silva Santos - Oct/25/2022

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i = 0, j, igual;
    int num2[25];                               // i     = 2
                                                // j     = 2
    srand(time(NULL));                          // igual = 1

    do
    {
        num2[i] = rand() % 50;                 // 14, 36, *14, 18
        igual = 0;
        for(j=0; j<i; j++)
        {
            if(num2[j] == num2[i])
            {
                igual = 1;
            }
        }
        if(igual == 0)
        {
            i++;
        }
    }
    while(i<25);

    printf("\n\n");

    for(i=0; i<25; i++)
    {
        printf("%d ", num2[i]);
    }

    printf("\n\n");

    getchar();

    return 0;
}
