//Problema 1.8. Número primo
//Desarrolla un programa que ingrese por teclado un número entero mayor que 1 y determine si es
//primo o no

#include <stdio.h>

int main()
{
    int n, i, esPrimo = 1;

    printf("Ingresa un numero entero mayor que 1: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Error: el numero debe ser mayor que 1.\n");
    }
    else
    {
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                esPrimo = 0;
                break;
            }
        }

        if (esPrimo)
            printf("%d es primo\n", n);
        else
            printf("%d NO es primo\n", n);
    }

    return 0;
}
