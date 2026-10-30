#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, d;
    bool esPrimo;

    printf("Ingrese n: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("El numero debe ser mayor que 1\n");
    } else {
        esPrimo = true;
        d = 2;

        while (d * d <= n && esPrimo) {
            if (n % d == 0) {
                esPrimo = false;
            }
            d = d + 1;
        }

        if (esPrimo) {
            printf("%d es primo\n", n);
        } else {
            printf("%d no es primo\n", n);
        }
    }

    return 0;
}
