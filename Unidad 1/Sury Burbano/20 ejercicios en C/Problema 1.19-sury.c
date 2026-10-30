#include <stdio.h>

int main() {
    int num, mayor = 0, segundo = 0;
    int cantidad = 0;

    printf("Ingrese numeros positivos (0 para terminar):\n");
    scanf("%d", &num);

    while (num != 0) {
        if (num > 0) {
            cantidad++;

            if (num >= mayor) {
                segundo = mayor;
                mayor = num;
            } else if (num > segundo) {
                segundo = num;
            }
        } else {
            printf("Se ignoran los numeros negativos.\n");
        }

        scanf("%d", &num);
    }

    if (cantidad < 2) {
        printf("Datos insuficientes.\n");
    } else {
        printf("Mayor: %d\n", mayor);
        printf("Segundo mayor: %d\n", segundo);
    }

    return 0;
}
