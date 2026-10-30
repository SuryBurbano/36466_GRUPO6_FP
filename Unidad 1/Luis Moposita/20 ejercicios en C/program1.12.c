//Problema 1.12. Suma de dígitos
//Desarrolla un programa que lea un entero positivo y calcule la suma de sus dígitos.

#include <stdio.h>

int main()
{
    int n, copia, digito, suma = 0;

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
            suma += digito;
            copia = copia / 10;
        }

        printf("La suma de los digitos de %d es %d\n", n, suma);
    }

    return 0;
}
