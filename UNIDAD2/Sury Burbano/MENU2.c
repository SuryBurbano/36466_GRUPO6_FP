#include <stdio.h>

int main() {
    int opcion, cantidad;

    do {
        printf("\n===============================\n");
        printf("        MENU PRINCIPAL         \n");
        printf("===============================\n");
        printf("1. Mostrar una figura\n");
        printf("2. Mostrar una serie numerica\n");
        printf("3. Salir\n");
        printf("===============================\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        printf("\n");

        switch (opcion) {
            case 1:
                // Validar que no se ingresen numeros negativos ni cero
                do {
                    printf("Ingresa el tamano del lado para el cuadrado (mayor a 0): ");
                    scanf("%d", &cantidad);
                    if (cantidad <= 0) {
                        printf("Error: No se permiten numeros negativos ni cero. Intenta de nuevo.\n");
                    }
                } while (cantidad <= 0);

                printf("\n--- FIGURA (Cuadrado de %dx%d) ---\n", cantidad, cantidad);
                for (int i = 1; i <= cantidad; i++) {
                    for (int j = 1; j <= cantidad; j++) {
                        printf("* ");
                    }
                    printf("\n");
                }
                break;

            case 2:
                // Validar que no se ingresen numeros negativos ni cero
                do {
                    printf("Ingresa cuantos numeros pares quieres ver (mayor a 0): ");
                    scanf("%d", &cantidad);
                    if (cantidad <= 0) {
                        printf("Error: No se permiten numeros negativos ni cero. Intenta de nuevo.\n");
                    }
                } while (cantidad <= 0);

                printf("\n--- SERIE NUMERICA (%d numeros pares) ---\n", cantidad);
                for (int i = 1; i <= cantidad; i++) {
                    printf("%d ", i * 2);
                }
                printf("\n");
                break;

            case 3:
                printf("Gracias por usar el programa. ¡Hasta pronto!\n");
                break;

            default:
                printf("Opcion no valida. Por favor, intenta de nuevo.\n");
                break;
        }

    } while (opcion != 3);

    return 0;
}
