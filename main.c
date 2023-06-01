#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x;
    int y;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("O maior numero e: %d", x);
    }
    else
    {
        printf("O maior numero e: %d", y);
    }
    return 0;
}
