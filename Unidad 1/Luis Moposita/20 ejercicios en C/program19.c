//Problema 1.19. Segundo mayor de una secuencia
//Desarrolla un programa que lea números enteros positivos hasta que se introduzca un 0, y muestre el
//mayor y el segundo mayor de los valores ingresados. Si hay menos de dos valores, debe informarlo.

#include <stdio.h>

int main()
{
    int x, mayor = 0, segundo = 0, contador = 0;

    printf("Ingresa un entero positivo (0 para terminar): ");
    scanf("%d", &x);

    while (x != 0)
    {
        if (x < 0)
        {
            printf("Error: solo se aceptan enteros positivos.\n");
        }
        else
        {
            if (contador == 0)
            {
                mayor = x;
            }
            else if (contador == 1)
            {
                if (x > mayor)
                {
                    segundo = mayor;
                    mayor = x;
                }
                else
                {
                    segundo = x;
                }
            }
            else
            {
                if (x > mayor)
                {
                    segundo = mayor;
                    mayor = x;
                }
                else if (x > segundo)
                {
                    segundo = x;
                }
            }
            contador++;
        }

        printf("Ingresa un entero positivo (0 para terminar): ");
        scanf("%d", &x);
    }

    if (contador < 2)
    {
        printf("Se necesitan al menos dos valores.\n");
    }
    else
    {
        printf("Mayor = %d\n", mayor);
        printf("Segundo mayor = %d\n", segundo);
    }

    return 0;
}
