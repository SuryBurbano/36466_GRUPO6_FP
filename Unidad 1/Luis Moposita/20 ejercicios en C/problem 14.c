//Problema 1.14. Máximo común divisor (algoritmo de Euclides)
//Desarrolla un programa que lea dos enteros positivos a y b y calcule su máximo común divisor con el
//algoritmo de Euclides: mientras b ≠ 0, reemplaza (a, b) por (b, a % b). Al terminar, a es el MCD.

#include <stdio.h>

int main()
{
    int a, b, copiaA, copiaB, temp;

    printf("Ingresa el primer entero positivo a: ");
    scanf("%d", &a);

    printf("Ingresa el segundo entero positivo b: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0)
    {
        printf("Error: ambos numeros deben ser positivos.\n");
    }
    else
    {
        copiaA = a;
        copiaB = b;

        while (copiaB != 0)
        {
            temp = copiaB;
            copiaB = copiaA % copiaB;
            copiaA = temp;
        }

        printf("MCD(%d, %d) = %d\n", a, b, copiaA);
    }

    return 0;
}
