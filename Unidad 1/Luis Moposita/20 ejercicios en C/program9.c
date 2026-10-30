//Problema 1.9. Números primos comprendidos entre dos números dados
//Desarrolla un programa que muestre por pantalla todos los números primos comprendidos entre dos
//números enteros introducidos por teclado.
#include <stdio.h>

int main()
{
    int a, b, n, i, esPrimo, temp;

    printf("Ingresa el primer numero entero: ");
    scanf("%d", &a);

    printf("Ingresa el segundo numero entero: ");
    scanf("%d", &b);

    /* Si el usuario los escribe al reves, los intercambiamos */
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    printf("Primos entre %d y %d:\n", a, b);

    for (n = a; n <= b; n++)
    {
        if (n > 1)
        {
            esPrimo = 1;

            for (i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    esPrimo = 0;
                    break;
                }
            }

            if (esPrimo)
                printf("%d ", n);
        }
    }

    printf("\n");

    return 0;
}
