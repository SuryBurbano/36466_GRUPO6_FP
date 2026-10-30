#include <stdio.h>

int main() {
    int n, i;
    long long fact;

    printf("Ingrese n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El factorial no esta definido para negativos\n");
    } else {
        if (n > 20) {
            printf("n es demasiado grande (maximo 20)\n");
        } else {
            fact = 1;
            i = 1;
            while (i <= n) {
                fact = fact * i;
                i = i + 1;
            }
            printf("%d! = %lld\n", n, fact);
        }
    }

    return 0;
}
