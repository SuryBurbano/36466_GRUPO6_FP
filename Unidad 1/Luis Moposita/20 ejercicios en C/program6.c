//Problema 1.6. Máximo, mínimo y media de alturas
//Desarrolla un programa que lea por teclado un número indeterminado de alturas y deje de leer
//cuando se introduzca una negativa. El programa debe calcular e imprimir la media, el máximo y el
//mínimo de las alturas introducidas

#include <stdio.h>

int main()
{
    float altura, suma = 0, maximo, minimo, media;
    int contador = 0;

    printf("Ingresa una altura (negativa para terminar): ");
    scanf("%f", &altura);

    while (altura >= 0)
    {
        if (contador == 0)
        {
            maximo = altura;
            minimo = altura;
        }
        else
        {
            if (altura > maximo)
                maximo = altura;
            if (altura < minimo)
                minimo = altura;
        }

        suma += altura;
        contador++;

        printf("Ingresa una altura (negativa para terminar): ");
        scanf("%f", &altura);
    }

    if (contador == 0)
    {
        printf("No se introdujo ninguna altura.\n");
    }
    else
    {
        media = suma / contador;
        printf("Media: %.2f\n", media);
        printf("Maximo: %.2f\n", maximo);
        printf("Minimo: %.2f\n", minimo);
    }

    return 0;
}
