//Problema 1.7. Raíz cuadrada entera
//Desarrolla un programa que calcule la raíz cuadrada entera por defecto de un número N positivo
//dado, que se define como el mayor número entero R > 0 tal que R² ≤ N.

#include <stdio.h>

int main()
{
    int N, i, R;

    printf("Ingresa un numero entero positivo N: ");
    scanf("%d", &N);

    if (N <= 0)
    {
        printf("Error: N debe ser positivo.\n");
    }
    else
    {
        i = 1;
        while (i * i <= N)
        {
            i++;
        }

        R = i - 1;

        printf("La raiz cuadrada entera por defecto de %d es %d\n", N, R);
    }

    return 0;
}
