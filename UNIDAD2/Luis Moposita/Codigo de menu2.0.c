//mostrar un menu con 3 opciones, realizado por Luis Moposita

#include <stdio.h>
#include <windows.h>

int main()
{
    int op, n, fil, j, k;
    float res, i;

    do
    {
        printf("MENU\n");
        printf("1. Figura\n");
        printf("2. Serie\n");
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
                printf("Valor de n: ");
                scanf("%d", &n);
                res = 0;
                for (i = 1; i <= n; i++)
                    res = res + 1 / i;
                printf("Suma de la serie = %.2f\n", res);
                break;

            case 3:
                printf("Gracias por su atencion cualquier duda a google xfavor. Hasta luego!\n");
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
