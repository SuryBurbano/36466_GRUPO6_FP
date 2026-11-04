#include <stdio.h>
//Problema 1.4. Intervalo
//Desarrolla un programa que lea un número por teclado y determine si pertenece al intervalo [0, 10],
//indicando el resultado por pantalla.

int main() {
    float x;

    printf("Ingrese un numero: ");
    scanf("%f", &x);

    if (x >= 0 && x <= 10) {
        printf("Pertenece al intervalo.\n");
    } else {
        printf("No pertenece al intervalo.\n");
    }

    return 0;
}
