#include <stdio.h>

int main() {
    double x, absx, resultado;

    printf("Ingrese x: ");
    scanf("%lf", &x);

    if (x < 0) {
        absx = -x;
    } else {
        absx = x;
    }

    resultado = absx * absx * absx;

    printf("|%g|^3 = %g\n", x, resultado);
    return 0;
}
