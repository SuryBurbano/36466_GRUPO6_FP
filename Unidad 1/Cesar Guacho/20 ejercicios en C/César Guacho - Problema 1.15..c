#include <stdio.h>

int main() {
    int anio;

    printf("Ingrese un anio: ");
    scanf("%d", &anio);

    if (anio <= 0) {
        printf("Ingrese un anio valido.\n");
    } else if (anio % 400 == 0 ||
              (anio % 4 == 0 && anio % 100 != 0)) {
        printf("El anio es bisiesto.\n");
    } else {
        printf("El anio no es bisiesto.\n");
    }

    return 0;
}
