#include <stdio.h>

int main() {
    int n, copia, suma;

    printf("Ingrese un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Ingrese un entero positivo\n");
    } else {
        suma = 0;
        copia = n;

        while (copia > 0) {
            suma = suma + copia % 10;
            copia = copia / 10;
        }

        printf("La suma de los digitos de %d es %d\n", n, suma);
    }

    return 0;
}
