// Codigo para crear un cuadrado
#include <stdio.h>
int main()
{
    /*
        * * * *
        * * * *
        * * * *
        * * * *
    */
    int i, j, n;

    do
    {
        printf("Tamaño del cuadrado: ");
        scanf("%d", &n);
    } while(n <= 0);

    for(i = 1; i <= n; i++) // filas
    {
        for(j = 1; j <= n; j++) // columnas
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
