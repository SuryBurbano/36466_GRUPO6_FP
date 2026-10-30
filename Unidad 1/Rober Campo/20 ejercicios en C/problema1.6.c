#include <stdio.h>

int main() {
    double h, suma, maximo, minimo, media;
    int cont;

    suma = 0;
    cont = 0;
    maximo = 0;
    minimo = 0;

    printf("Ingrese altura (un numero negativo termina): ");
    scanf("%lf", &h);

    while (h >= 0) {
        if (cont == 0) {
            maximo = h;
            minimo = h;
        } else {
            if (h > maximo) {
                maximo = h;
            }
            if (h < minimo) {
                minimo = h;
            }
        }

        suma = suma + h;
        cont = cont + 1;

        printf("Ingrese altura (un numero negativo termina): ");
        scanf("%lf", &h);
    }

    if (cont == 0) {
        printf("No se ingresaron alturas\n");
    } else {
        media = suma / cont;
        printf("Media: %.2f\n", media);
        printf("Minimo: %.2f\n", minimo);
        printf("Maximo: %.2f\n", maximo);
    }

    return 0;
}
