#include <stdio.h>

int main() {
    long long N, i, R;

    printf("Ingrese N: ");
    scanf("%lld", &N);

    if (N <= 0) {
        printf("N debe ser positivo\n");
    } else {
        i = 1;
        while (i * i <= N) {
            i = i + 1;
        }
        R = i - 1;
        printf("La raiz cuadrada entera de %lld es %lld\n", N, R);
    }

    return 0;
}
