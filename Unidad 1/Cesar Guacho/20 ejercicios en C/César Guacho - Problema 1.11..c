#include <stdio.h>

int main() {
    int n, anterior = 0, actual = 1;
    int siguiente, i;

    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Ingrese un numero mayor o igual a 1.\n");
    } else {
        for (i = 1; i <= n; i++) {
            printf("%d ", anterior);

            siguiente = anterior + actual;
            anterior = actual;
            actual = siguiente;
        }
    }

    printf("\n");
    return 0;
}
