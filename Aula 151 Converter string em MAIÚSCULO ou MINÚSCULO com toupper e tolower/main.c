#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include <string.h>
#include <ctype.h>

//William Cardoso da Silva Santos - Oct/31/2022

// Procedimento que converte uma string para maiusculo
void maiusculo(char str1[], char str2[])
{
    int i = 0;
    while(str1[i] != '\0')
    {
        str2[i] = toupper(str1[i]);
        i++;
    }
    str2[i] = '\0';
}

// Procedimento que converte uma string para minusculo
void minusculo(char str1[], char str2[])
{
    int i = 0;
    while(str1[i] != '\0')
    {
        str2[i] = tolower(str1[i]);
        i++;
    }
    str2[i] = '\0';
}

void primeiraLetraMaiusculo(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] != '\0')
    {
        if(i == 0 || str1[i-1] == ' ')
        {
            str2[i] = toupper(str1[i]);
        }
        else
        {
            str2[i] = tolower(str1[i]);
        }
        i++;
    }
    str2[i] = '\0';
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char str1[] = "Ola. bom dIA. tUdo bEM?";
    char str2[50];

    printf("%s\n", str1);

    maiusculo(str1, str2);
    printf("%s\n", str2);

    minusculo(str1, str2);
    printf("%s\n", str2);

    primeiraLetraMaiusculo(str1, str2);
    printf("%s\n", str2);

    getchar();

    return 0;
}
