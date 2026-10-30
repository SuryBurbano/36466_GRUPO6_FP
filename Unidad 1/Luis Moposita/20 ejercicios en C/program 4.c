//Problema 1.4. Intervalo
//Desarrolla un programa que lea un número por teclado y determine si pertenece al intervalo [0, 10],
//indicando el resultado por pantalla.

#include <stdio.h>

int main()
{
    float x;

    printf("Ingresa un numero: ");
    scanf("%f", &x);

    if (x >= 0 && x <= 10)
    {
        printf("%.2f pertenece al intervalo [0, 10]\n", x);
    }
    else
    {
        printf("%.2f NO pertenece al intervalo [0, 10]\n", x);
    }

    return 0;
}
