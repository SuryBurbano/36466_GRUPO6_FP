#include <stdio.h>

int main() {
    int a, b, r;

    printf("Ingrese a: ");
    scanf("%d", &a);
    printf("Ingrese b: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Ingrese dos enteros positivos\n");
    } else {
        while (b != 0) {
            r = a % b;
            a = b;
            b = r;
        }
        printf("El MCD es %d\n", a);
    }

    return 0;
}
