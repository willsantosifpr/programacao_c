#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - May/20/2023 <> May/21/2023

/*
    fibonacci:
    0  1  2  3  4  5  6   7   8   9  10
    0  1  1  2  3  5  8  13  21  34  55...
*/

int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int n;

    printf("Digite a posicao fibonacci: ");
    scanf("%d", &n);

    printf("A posicao %d fibonacci eh %d\n", n, fibonacci(n));

    getchar();

    return 0;
}
