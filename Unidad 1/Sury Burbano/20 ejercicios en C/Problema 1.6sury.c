#include <stdio.h>

int main() {
    float altura, suma = 0;
    float mayor = 0, menor = 0, promedio;
    int cantidad = 0;

    printf("Ingrese una altura (negativa para terminar): ");
    scanf("%f", &altura);

    while (altura >= 0) {
        if (cantidad == 0) {
            mayor = altura;
            menor = altura;
        } else {
            if (altura > mayor) {
                mayor = altura;
            }

            if (altura < menor) {
                menor = altura;
            }
        }

        suma = suma + altura;
        cantidad++;

        printf("Ingrese otra altura: ");
        scanf("%f", &altura);
    }

    if (cantidad > 0) {
        promedio = suma / cantidad;

        printf("Cantidad de alturas: %d\n", cantidad);
        printf("Promedio: %.2f\n", promedio);
        printf("Altura maxima: %.2f\n", mayor);
        printf("Altura minima: %.2f\n", menor);
    } else {
        printf("No se ingresaron alturas.\n");
    }

    return 0;
}
