//Problema 1.18. Triángulo de asteriscos
//Desarrolla un programa que lea un entero n ≥ 1 y dibuje por pantalla un triángulo rectángulo de n
//filas, donde la fila i tiene i asteriscos.

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Ingresa un entero n >= 1: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Error: n debe ser al menos 1.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}
