//Problema 1.16. Número perfecto
//Desarrolla un programa que lea un entero positivo y determine si es perfecto, es decir, si es igual a la
//suma de sus divisores propios (los menores que él).

#include <stdio.h>

int main()
{
    int n, d, suma = 0;

    printf("Ingresa un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Error: el numero debe ser positivo.\n");
    }
    else
    {
        for (d = 1; d < n; d++)
        {
            if (n % d == 0)
            {
                suma += d;
            }
        }

        if (suma == n)
            printf("%d es perfecto\n", n);
        else
            printf("%d NO es perfecto\n", n);
    }

    return 0;
}
