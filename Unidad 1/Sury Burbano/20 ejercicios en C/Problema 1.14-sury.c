#include <stdio.h>

int main() {
    int a, b, resto;

    printf("Ingrese dos enteros positivos: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Los numeros deben ser positivos.\n");
    } else {
        while (b != 0) {
            resto = a % b;
            a = b;
            b = resto;
        }

        printf("El MCD es: %d\n", a);
    }

    return 0;
}
