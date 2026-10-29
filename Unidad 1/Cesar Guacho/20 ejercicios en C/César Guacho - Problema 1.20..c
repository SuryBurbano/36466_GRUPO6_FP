#include <stdio.h>

int main() {
    int secreto = 42;
    int intento, contador = 0;

    printf("Adivina el numero entre 1 y 100.\n");

    do {
        printf("Ingrese su intento: ");
        scanf("%d", &intento);

        if (intento < 1 || intento > 100) {
            printf("Numero fuera de rango.\n");
            continue;
        }

        contador++;

        if (intento < secreto) {
            printf("Mas alto.\n");
        } else if (intento > secreto) {
            printf("Mas bajo.\n");
        } else {
            printf("Acertaste!\n");
        }

    } while (intento != secreto);

    printf("Intentos utilizados: %d\n", contador);

    return 0;
}

