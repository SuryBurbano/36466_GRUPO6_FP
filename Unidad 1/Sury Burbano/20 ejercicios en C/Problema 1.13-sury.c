#include <stdio.h>

int main() {
    int n, original, invertido = 0, digito;

    printf("Ingrese un numero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El numero debe ser positivo.\n");
    } else {
        original = n;

        while (n > 0) {
            digito = n % 10;
            invertido = invertido * 10 + digito;
            n = n / 10;
        }

        if (original == invertido) {
            printf("El numero es capicua.\n");
        } else {
            printf("El numero no es capicua.\n");
        }
    }

    return 0;
}
