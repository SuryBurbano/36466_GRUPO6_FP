#include <stdio.h>

int main() {
    double x;

    printf("Ingrese x: ");
    scanf("%lf", &x);

    if (x >= 0 && x <= 10) {
        printf("%g pertenece al intervalo [0,10]\n", x);
    } else {
        printf("%g no pertenece al intervalo [0,10]\n", x);
    }

    return 0;
}
