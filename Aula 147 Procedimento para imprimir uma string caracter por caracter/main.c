#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//William Cardoso da Silva Santos - Oct/19/2022

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

void imprimirString(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char name[] = {"Veronica Nunes Galvao"};

    printf("%d\n", myStrLen(name));

    char city[] = {"New York City"};

    imprimirString(city);
    imprimirString(name);

    getchar();

    return 0;
}
