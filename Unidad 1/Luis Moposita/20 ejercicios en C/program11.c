//Problema 1.11. Serie de Fibonacci
//Desarrolla un programa que lea un entero n ≥ 1 y muestre los primeros n términos de la serie de
//Fibonacci (0, 1, 1, 2, 3, 5, 8, …), donde cada término es la suma de los dos anteriores.

#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long anterior = 0, actual = 1, siguiente;

    printf("Ingresa un entero n >= 1: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Error: n debe ser al menos 1.\n");
    }
    else if (n > 93)
    {
        printf("Error: con n > 93 los terminos no caben en un unsigned long long.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            printf("%llu ", anterior);

            siguiente = anterior + actual;
            anterior = actual;
            actual = siguiente;
        }

        printf("\n");
    }

    return 0;
}
