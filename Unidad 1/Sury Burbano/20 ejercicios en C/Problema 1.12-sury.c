#include <stdio.h>
//Problema 1.12. Suma de dígitos
//Desarrolla un programa que lea un entero positivo y calcule la suma de sus dígitos.
int main() {
    int n, digito, suma = 0;

    printf("Ingrese un numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El numero debe ser positivo.\n");
    } else {
        while (n > 0) {
            digito = n % 10;
            suma = suma + digito;
            n = n / 10;
        }

        printf("La suma de los digitos es: %d\n", suma);
    }

    return 0;
}
