//Problema 1.13. Número capicúa
//Desarrolla un programa que lea un entero positivo y determine si es capicúa, es decir, si se lee igual
//de izquierda a derecha que de derecha a izquierda.

#include <stdio.h>

int main()
{
    int n, copia, digito;
    long long invertido = 0;

    printf("Ingresa un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Error: el numero debe ser positivo.\n");
    }
    else
    {
        copia = n;

        while (copia > 0)
        {
            digito = copia % 10;
            invertido = invertido * 10 + digito;
            copia = copia / 10;
        }

        if (invertido == n)
            printf("%d es capicua\n", n);
        else
            printf("%d NO es capicua\n", n);
    }

    return 0;
}
