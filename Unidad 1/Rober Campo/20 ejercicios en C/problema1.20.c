#include <stdio.h>

int main() {
    int secreto, intento, cont;

    secreto = 37;
    cont = 0;

    do {
        printf("Ingrese su intento (1-100): ");
        scanf("%d", &intento);
        cont = cont + 1;

        if (intento < secreto) {
            printf("Mas alto\n");
        } else {
            if (intento > secreto) {
                printf("Mas bajo\n");
            } else {
                printf("Acertaste!\n");
            }
        }
    } while (intento != secreto);

    printf("Intentos usados: %d\n", cont);
    return 0;
}
