//Problema 1.17. Conversión de decimal a binario
//Desarrolla un programa que lea un entero positivo en base 10 y muestre su representación en
//binario.
#include <stdio.h>

int main()
{
    int n, copia, resto;
    unsigned long long binario = 0, potencia = 1;

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
            resto = copia % 2;
            binario = binario + resto * potencia;
            potencia = potencia * 10;
            copia = copia / 2;
        }

        printf("%d en binario es %llu\n", n, binario);
    }

    return 0;
}
