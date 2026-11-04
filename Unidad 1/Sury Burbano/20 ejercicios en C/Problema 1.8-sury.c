#include <stdio.h>
//Problema 1.8. Número primo
//Desarrolla un programa que ingrese por teclado un número entero mayor que 1 y determine si es
//primo o no

int main() {
    int n, divisor = 2, primo = 1;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    if (n < 2) {
        primo = 0;
    } else {
        while (divisor <= n / divisor && primo == 1) {
            if (n % divisor == 0) {
                primo = 0;
            }

            divisor++;
        }
    }

    if (primo == 1) {
        printf("El numero es primo.\n");
    } else {
        printf("El numero no es primo.\n");
    }

    return 0;
}
