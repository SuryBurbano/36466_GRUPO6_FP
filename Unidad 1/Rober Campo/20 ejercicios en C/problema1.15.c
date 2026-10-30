#include <stdio.h>

int main() {
    int anio;

    printf("Ingrese el anio: ");
    scanf("%d", &anio);

    if (anio <= 0) {
        printf("Anio no valido\n");
    } else {
        if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
            printf("%d es bisiesto\n", anio);
        } else {
            printf("%d no es bisiesto\n", anio);
        }
    }

    return 0;
}
