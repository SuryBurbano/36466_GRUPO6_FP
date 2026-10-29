#include <stdio.h>

int main() {
    int a, b, aux;
    int n, divisor, primo;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    printf("Numeros primos entre %d y %d:\n", a, b);

    for (n = a; ; n++) {
        primo = 1;

        if (n < 2) {
            primo = 0;
        } else {
            divisor = 2;

            while (divisor <= n / divisor && primo == 1) {
                if (n % divisor == 0) {
                    primo = 0;
                }

                divisor++;
            }
        }

        if (primo == 1) {
            printf("%d ", n);
        }

        if (n == b) {
            break;
        }
    }

    printf("\n");

    return 0;
}
