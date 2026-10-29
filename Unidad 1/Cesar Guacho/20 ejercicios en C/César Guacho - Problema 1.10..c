#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Ingrese un numero entre 0 y 20.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("El factorial de %d es: %llu\n", n, factorial);
    }

    return 0;
}
