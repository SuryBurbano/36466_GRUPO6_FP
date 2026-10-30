#include <stdio.h>

int main() {
    int c, dias, horas, minutos, segundos, resto;

    printf("Ingrese los segundos: ");
    scanf("%d", &c);

    if (c < 0) {
        printf("Los segundos no pueden ser negativos\n");
    } else {
        dias = c / 86400;
        resto = c % 86400;
        horas = resto / 3600;
        resto = resto % 3600;
        minutos = resto / 60;
        segundos = resto % 60;

        printf("%d segundos = %d dias, %d horas, %d minutos y %d segundos.\n",
               c, dias, horas, minutos, segundos);
    }

    return 0;
}
