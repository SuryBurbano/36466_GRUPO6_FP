#include <stdio.h>
#include <stdlib.h>

void validarFecha() {
    int anio, mes, dia;

    do {
        printf("Ingrese el anio (1900 - 2015): ");
        scanf("%d", &anio);
        if (anio < 1900 || anio > 2015) {
            printf("Error: Anio fuera de rango. Intente nuevamente.\n");
        }
    } while (anio < 1900 || anio > 2015);

    do {
        printf("Ingrese el mes (1 - 12): ");
        scanf("%d", &mes);
        if (mes < 1 || mes > 12) {
            printf("Error: Mes fuera de rango. Intente nuevamente.\n");
        }
    } while (mes < 1 || mes > 12);

    do {
        printf("Ingrese el dia (1 - 31): ");
        scanf("%d", &dia);
        if (dia < 1 || dia > 31) {
            printf("Error: Dia fuera de rango. Intente nuevamente.\n");
        }
    } while (dia < 1 || dia > 31);

    printf("\n¡Fecha valida ingresada con exito: %02d/%02d/%d!\n", dia, mes, anio);
}

// Función de plantilla para la opción 2
void desplegarSerieLetras() {
    printf("\n--- Ejecutando: Desplegar serie letras ---\n");
    // Colocar la lógica de la serie de letras
}

// Función de plantilla para la opción 3
void desplegarSerieNumero() {
    printf("\n--- Ejecutando: Desplegar serie numero ---\n");
    // Colocar la lógica de la serie de números
}

int main() {
    int opcion;

    do {
        // Mostrar Menú Principal
        printf("\n==============================\n");
        printf("        MENU PRINCIPAL        \n");
        printf("==============================\n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie letras\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("Ingrese una opcion: ");

        // Validar si la entrada es un número entero
        if (scanf("%d", &opcion) != 1) {
            printf("\nOpcion no valida\n");
            // Limpiar el búfer para evitar bucles infinitos si ingresan letras
            while (getchar() != '\n');
            opcion = 0; // Forzar a que sea inválida para que entre al default
        }

        switch (opcion) {
            case 1:
                validarFecha();
                break;
            case 2:
                desplegarSerieLetras();
                break;
            case 3:
                desplegarSerieNumero();
                break;
            case 4:
                printf("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nOpcion no valida\n");
                break;
        }

        // Si la opción no es Salir (4), esperar una tecla y limpiar la pantalla
        if (opcion != 4) {
            printf("\nPresione Enter para continuar...");
            while (getchar() != '\n'); // Limpiar el salto de línea pendiente de scanf
            getchar(); // Esperar la pulsación de la tecla Enter

            system("cls");
        }

    } while (opcion != 4);

    return 0;
}
