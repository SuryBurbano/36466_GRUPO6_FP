//Problema 1.1. Media de dos valores
//Desarrolla un programa que ingrese dos números por teclado e imprima su media
#include <stdio.h>

int main()
{
    float num1, num2, media;

    printf("Ingresa el primer numero: ");
    scanf("%f", &num1);

    printf("Ingresa el segundo numero: ");
    scanf("%f", &num2);

    media = (num1 + num2) / 2;

    printf("La media de %.2f y %.2f es: %.2f\n", num1, num2, media);

    return 0;
}
