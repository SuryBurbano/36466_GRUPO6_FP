#include <stdio.h>

int main() {
    int n, d, suma = 0;

    printf("Ingrese un numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El numero debe ser positivo.\n");
    } else {
        for (d = 1; d < n; d++) {
            if (n % d == 0) {
                suma = suma + d;
            }
        }

        if (suma == n) {
            printf("Es un numero perfecto.\n");
        } else {
            printf("No es un numero perfecto.\n");
        }
    }

    return 0;
}
