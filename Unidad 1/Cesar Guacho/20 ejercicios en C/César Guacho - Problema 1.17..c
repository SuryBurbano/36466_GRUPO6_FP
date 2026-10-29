#include <stdio.h>

int main() {
    int n, resto;
    unsigned long long binario = 0;
    unsigned long long posicion = 1;

    printf("Ingrese un numero decimal positivo: ");
    scanf("%d", &n);

    if (n <= 0 || n > 1023) {
        printf("Ingrese un numero entre 1 y 1023.\n");
    } else {
        while (n > 0) {
            resto = n % 2;
            binario = binario + resto * posicion;
            posicion = posicion * 10;
            n = n / 2;
        }

        printf("El numero en binario es: %llu\n", binario);
    }

    return 0;
}
