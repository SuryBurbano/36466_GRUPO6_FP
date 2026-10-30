//Problema 1.5. Conversión de unidades de tiempo
//Desarrolla un programa que lea por teclado un valor entero c, interpretándolo como el número de
//segundos que dura un evento, y calcule y muestre por pantalla cuántos días, horas, minutos y
//segundos representa.

#include <stdio.h>

int main()
{
    int c, dias, horas, minutos, segundos, resto;

    printf("Ingresa el numero de segundos: ");
    scanf("%d", &c);

    dias = c / (24 * 60 * 60);
    resto = c % (24 * 60 * 60);

    horas = resto / (60 * 60);
    resto = resto % (60 * 60);

    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d segundos equivalen a:\n", c);
    printf("%d dias, %d horas, %d minutos y %d segundos\n", dias, horas, minutos, segundos);

    return 0;
}
