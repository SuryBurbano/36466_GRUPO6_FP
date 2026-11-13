#include <stdio.h>
#include <windows.h>

int main()
{
    int opcion, lado, n, i, j;
    float suma;

    do
    {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1. Figura\n");
        printf("2. Serie\n");
        printf("3. Salir\n");
        printf("==========================\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                printf("\nIngrese el tamano de la figura: ");
                scanf("%d", &lado);

                for(i = 1; i <= lado; i++)
                {
                    for(j = 1; j <= lado; j++)
                    {
                        printf("* ");
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("\nIngrese el valor de n: ");
                scanf("%d", &n);

                suma = 0;

                for(i = 1; i <= n; i++)
                {
                    suma = suma + 1.0 / i;
                }

                printf("Resultado de la serie: %.2f\n", suma);
                break;

            case 3:
                printf("\nGracias por utilizar este bello programa.\n");
                printf("Hasta pronto!\n");
                break;

            default:
                printf("\nOpcion incorrecta. Intente nuevamente.\n");
        }

        if(opcion != 3)
        {
            system("pause");
            system("cls");
        }

    } while(opcion != 3);

    return 0;
}
