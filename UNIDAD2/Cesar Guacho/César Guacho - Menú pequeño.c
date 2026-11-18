//mostrar un menú pequeño de 3 opciones. Elaborado por César Guacho

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


#include<stdio.h>
#include<stdlib.h>

void ValidarFecha() {
    int anio, mes, dia;
    int diasMaximos = 0;


    do {
        printf("\nIngrese el anio (1900-2015): ");
        scanf("%d", &anio);
        if (anio < 1900 || anio > 2015) {
            printf("Anio fuera de rango. Intente nuevamente.\n");
        }
    } while (anio < 1900 || anio > 2015);


    do {
        printf("Ingrese el mes (1-12): ");
        scanf("%d", &mes);
        if (mes < 1 || mes > 12) {
            printf("Mes invalido. Intente nuevamente.\n");
        }
    } while (mes < 1 || mes > 12);


    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            diasMaximos = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            diasMaximos = 30;
            break;
        case 2:
            diasMaximos = 29;
            break;
    }


    do {
        printf("Ingrese el dia (1-%d): ", diasMaximos);
        scanf("%d", &dia);
        if (dia < 1 || dia > diasMaximos) {
            printf("Dia fuera del rango para este mes. Intente nuevamente.\n");
        }
    } while (dia < 1 || dia > diasMaximos);


    char *nombreMes = "";
    switch (mes) {
        case 1:  nombreMes = "enero"; break;
        case 2:  nombreMes = "febrero"; break;
        case 3:  nombreMes = "marzo"; break;
        case 4:  nombreMes = "abril"; break;
        case 5:  nombreMes = "mayo"; break;
        case 6:  nombreMes = "junio"; break;
        case 7:  nombreMes = "julio"; break;
        case 8:  nombreMes = "agosto"; break;
        case 9:  nombreMes = "septiembre"; break;
        case 10: nombreMes = "octubre"; break;
        case 11: nombreMes = "noviembre"; break;
        case 12: nombreMes = "diciembre"; break;
    }

    printf("\nFecha ingresada exitosamente:\n");
    printf(">> %d de %s de %d <<\n", dia, nombreMes, anio);
}

int main(){
int option;
do{
    system("cls");

    printf("\n======================");
    printf("\n=========MENU=========");
    printf("\n======================");
    printf("\nINGRESE UNA OPCION:");
    printf("\n1. Validar fecha");
    printf("\n2. Desplegar serie letras");
    printf("\n3. Desplegar serie número");
    printf("\n4. Salir");
    printf("\nIngrese una funcion:");
    scanf("%d",&option);

    switch(option){
        case 1:
             ValidarFecha();
             printf("\n \n");
             system("pause");

             break;
        case 2:
            printf("letra");
            printf("\n \n");
            system("pause");
            //SerieLetras();
            break;
        case 3:
            printf("numero");
            printf("\n \n");
            system("pause");
            //SerieNumeros();
            break;
        case 4:
            printf("\nsaliendo del programa...\n");
            printf("\n \n");
            system("pause");
            break;
        default:
            printf("\nopcion invalida: intentelo de nuevo\n");

            system("pause");
   }
   }while(option !=4);
   return 0;
}
