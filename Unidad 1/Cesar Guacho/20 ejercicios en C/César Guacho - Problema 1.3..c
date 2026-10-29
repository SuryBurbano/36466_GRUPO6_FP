#include <stdio.h>

int main() {
    int a, b;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Divisor no valido.\n");
    } else if (a % b == 0) {
        printf("Es divisible.\n");
    } else {
        printf("No es divisible.\n");
    }

    return 0;
}
