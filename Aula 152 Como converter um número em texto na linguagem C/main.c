#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include <ctype.h>
#include <string.h>

//William Cardoso da Silva Santos - Nov/7/2022 <> Nov/10/2022

//          Como converter numero para texto em C?

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tam;
    char str1[10] = {"%"}, str2[10];

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    getchar();

    //sprintf(str2, "%d[^\n]", tam);
    snprintf(str2, 10, "%d[^\n]", tam);
    strcat(str1, str2);

    printf("%s\n", str2);

    char palavras[tam];

    printf("Digite uma frase: ");
    scanf(str1, palavras);

    printf("%s\n", palavras);

    getchar();

    return 0;
}
