#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b, aux, n, d, cont;
    bool esPrimo;

    printf("Ingrese a: ");
    scanf("%d", &a);
    printf("Ingrese b: ");
    scanf("%d", &b);

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    if (a < 2) {
        a = 2;
    }

    cont = 0;
    n = a;

    while (n <= b) {
        esPrimo = true;
        d = 2;

        while (d * d <= n && esPrimo) {
            if (n % d == 0) {
                esPrimo = false;
            }
            d = d + 1;
        }

        if (esPrimo) {
            printf("%d\n", n);
            cont = cont + 1;
        }

        n = n + 1;
    }

    if (cont == 0) {
        printf("No hay numeros primos en el rango\n");
    }

    return 0;
}
