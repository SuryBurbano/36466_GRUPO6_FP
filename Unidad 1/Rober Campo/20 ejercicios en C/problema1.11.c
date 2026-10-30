#include <stdio.h>

int main() {
    int n, i;
    long long ant, act, sig;

    printf("Ingrese n (entre 1 y 90): ");
    scanf("%d", &n);

    if (n < 1 || n > 90) {
        printf("Ingrese un valor entre 1 y 90\n");
    } else {
        ant = 0;
        act = 1;

        for (i = 1; i <= n; i++) {
            printf("%lld ", ant);
            sig = ant + act;
            ant = act;
            act = sig;
        }
        printf("\n");
    }

    return 0;
}
