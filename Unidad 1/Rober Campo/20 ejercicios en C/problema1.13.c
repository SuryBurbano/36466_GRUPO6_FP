#include <stdio.h>

int main() {
    long long n, copia, invertido;

    printf("Ingrese un entero positivo (maximo 18 digitos): ");
    scanf("%lld", &n);

    if (n <= 0) {
        printf("Ingrese un entero positivo\n");
    } else {
        copia = n;
        invertido = 0;

        while (copia > 0) {
            invertido = invertido * 10 + copia % 10;
            copia = copia / 10;
        }

        if (invertido == n) {
            printf("%lld es capicua\n", n);
        } else {
            printf("%lld no es capicua\n", n);
        }
    }

    return 0;
}
