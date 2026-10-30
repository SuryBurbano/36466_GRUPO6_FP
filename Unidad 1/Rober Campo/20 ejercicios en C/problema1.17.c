#include <stdio.h>

int main() {
    int n, resto;
    long long copia, binario, peso;

    printf("Ingrese un entero entre 1 y 262143: ");
    scanf("%d", &n);

    if (n < 1 || n > 262143) {
        printf("Ingrese un entero entre 1 y 262143\n");
    } else {
        copia = n;
        binario = 0;
        peso = 1;

        while (copia > 0) {
            resto = copia % 2;
            binario = binario + resto * peso;
            peso = peso * 10;
            copia = copia / 2;
        }

        printf("%d en binario es %lld\n", n, binario);
    }

    return 0;
}
