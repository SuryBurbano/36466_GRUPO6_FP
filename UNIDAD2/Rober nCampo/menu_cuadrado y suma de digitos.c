// Menu que dibuja un cuadrado de asteriscos y suma los digitos de un numero

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op, num, fil, suma, j, k;

    do
    {
        printf("MENU\n");
        printf("1. Figura\n");
        printf("2. Suma de digitos\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &op);

        switch (op)
        {
            case 1:
                printf("Lado del cuadrado: ");
                scanf("%d", &fil);
                for (j = 1; j <= fil; j++)
                {
                    for (k = 1; k <= fil; k++)
                        printf("* ");
                    printf("\n");
                }
                break;

            case 2:
                do
                {
                    printf("Ingrese un numero: ");
                    scanf("%d", &num);
                    if (num < 0)
                        printf("No se permiten negativos, intenta de nuevo.\n");
                } while (num < 0);
                suma = 0;
                while (num > 0)
                {
                    suma = suma + num % 10;
                    num = num / 10;
                }
                printf("Suma de los digitos = %d\n", suma);
                break;

            case 3:
                printf("Listo crack!\n");
                break;

            default:
                printf("Opcion invalida\n");
        }

        if (op != 3)
        {
            system("pause");
            system("cls");
        }

    } while (op != 3);

    return 0;
}
