#include <stdio.h>

int main() {
    int s, dias, horas, minutos, segundos;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &s);

    if (s < 0) {
        printf("Valor invalido.\n");
    } else {
        dias = s / 86400;
        s = s % 86400;

        horas = s / 3600;
        s = s % 3600;

        minutos = s / 60;
        segundos = s % 60;

        printf("Dias: %d\n", dias);
        printf("Horas: %d\n", horas);
        printf("Minutos: %d\n", minutos);
        printf("Segundos: %d\n", segundos);
    }

    return 0;
}
