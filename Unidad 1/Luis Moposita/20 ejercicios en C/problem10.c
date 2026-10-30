//Problema 1.10. Factorial
//Desarrolla un programa que lea un número entero n ≥ 0 y calcule n! = 1 · 2 · … · n, sabiendo que 0! =
//1

#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long factorial = 1;

    printf("Ingresa un numero entero n >= 0: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error: el factorial no esta definido para negativos.\n");
    }
    else if (n > 20)
    {
        printf("Error: %d! no cabe en un unsigned long long (maximo n = 20).\n", n);
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        printf("%d! = %llu\n", n, factorial);
    }

    return 0;
}
