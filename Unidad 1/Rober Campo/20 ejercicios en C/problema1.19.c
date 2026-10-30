#include <stdio.h>

int main() {
    int x, mayor, segundo, cont;

    mayor = 0;
    segundo = 0;
    cont = 0;

    printf("Ingrese un numero (0 termina): ");
    scanf("%d", &x);

    while (x != 0) {
        if (x < 0) {
            printf("Valor negativo ignorado\n");
        } else {
            cont = cont + 1;
            if (x > mayor) {
                segundo = mayor;
                mayor = x;
            } else {
                if (x > segundo) {
                    segundo = x;
                }
            }
        }

        printf("Ingrese un numero (0 termina): ");
        scanf("%d", &x);
    }

    if (cont < 2) {
        printf("Se necesitan al menos dos valores\n");
    } else {
        printf("Mayor: %d\n", mayor);
        printf("Segundo mayor: %d\n", segundo);
    }

    return 0;
}
