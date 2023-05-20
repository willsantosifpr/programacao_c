#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//William Cardoso da Silva Santos - Oct/17/2022

int myStrLen(char str[])
{
    int characterQuantity = 0;
    int size = 0;

    while(str[size] != '\0')
    {
        if (str[size] != ' ')
        {
            characterQuantity++;
        }
        size++;
    }

    return characterQuantity;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char name[] = {"Veronica Nunes Galvao"};

    printf("%d\n", myStrLen(name));

    getchar();

    return 0;
}
