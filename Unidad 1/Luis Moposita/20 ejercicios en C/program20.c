//Problema 1.20. Adivina el número
//Desarrolla un programa que “piense” un número entre 1 y 100 (puede ser fijo para la práctica) y pida
//al usuario adivinarlo. Después de cada intento debe indicar “más alto”, “más bajo” o “¡acertaste!”, y
//al final mostrar cuántos intentos se usaron

#include <stdio.h>

int main()
{
    int secreto = 67, intento, intentos = 0;

    printf("Estoy pensando un numero entre 1 y 100. Adivinalo.\n");

    do
    {
        printf("Tu intento: ");
        scanf("%d", &intento);
        intentos++;

        if (intento < secreto)
            printf("Mas alto\n");
        else if (intento > secreto)
            printf("Mas bajo\n");
        else
            printf("¡Acertaste!\n");

    } while (intento != secreto);

    printf("Lo lograste en %d intentos.\n", intentos);

    return 0;
}
