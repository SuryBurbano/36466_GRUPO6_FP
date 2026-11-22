#include <stdio.h>
#include <stdlib.h>

int diasDelMes(int mes) {
    switch (mes) {
        case 2:
            return 29;
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return 31;
    }
}

/* Lee un entero; si escribe letras, limpia el buffer y devuelve 0 */
int leerEntero(int *valor) {
    if (scanf("%d", valor) != 1) {
        while (getchar() != '\n');
        return 0;
    }
    while (getchar() != '\n');
    return 1;
}

/* RF-02: Opcion 1 - Validar fecha */
void validarFecha() {
    const char *meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                           "Julio", "Agosto", "Septiembre", "Octubre",
                           "Noviembre", "Diciembre"};
    int anio, mes, dia, maxDia;

    do {
        printf("\nIngrese el anio (1900 - 2015): ");
    } while (!leerEntero(&anio) || anio < 1900 || anio > 2015);

    do {
        printf("Ingrese el mes (1 - 12): ");
    } while (!leerEntero(&mes) || mes < 1 || mes > 12);

    maxDia = diasDelMes(mes);
    do {
        printf("Ingrese el dia (1 - %d): ", maxDia);
    } while (!leerEntero(&dia) || dia < 1 || dia > maxDia);

    printf("\nFecha valida: %d de %s de %d\n\n", dia, meses[mes - 1], anio);
}

/* RF-03: Opcion 2 - Serie de letras (impares arriba, pares abajo) */
void serieLetras() {
    int n, i, total;

    do {
        printf("\nIngrese la cantidad de terminos: ");
    } while (!leerEntero(&n) || n <= 0);

    /* Solo hay 13 pares de letras (a/b hasta y/z) */
    total = (n > 13) ? 13 : n;

    printf("\n");
    /* Fila 1: empieza en 'a' y avanza de 2 en 2 */
    for (i = 0; i < total; i++) {
        printf("%c ", 'a' + 2 * i);
    }
    printf("\n");

    /* Fila 2: un guion por termino */
    for (i = 0; i < total; i++) {
        printf("- ");
    }
    printf("\n");

    /* Fila 3: empieza en 'b' y avanza de 2 en 2 */
    for (i = 0; i < total; i++) {
        printf("%c ", 'b' + 2 * i);
    }
    printf("\n");

    if (n > 13) {
        printf("\n(Solo se muestran 13 terminos: despues de la z ya no hay letras)\n");
    }
    printf("\n");
}

/* RF-04: Opcion 3 - Serie de numeros intercalada (1,5,3,7,5,9...) */
void serieNumeros() {
    int n, i;
    int a = 1;   /* se reinician cada vez que se elige la opcion */
    int b = 5;

    do {
        printf("\nIngrese la cantidad de terminos: ");
    } while (!leerEntero(&n) || n < 0);   /* cero si se permite */

    printf("\n");
    /* Parejas completas */
    for (i = 0; i + 1 < n; i += 2) {
        printf("%d, %d\n", a, b);
        a += 2;
        b += 2;
    }
    /* Si es impar, falta un ultimo termino de la primera subsecuencia */
    if (n % 2 != 0) {
        printf("%d\n", a);
    }
    printf("\n");
}

int main() {
    int opcion;

    do {
        /* RF-01: menu principal */
        printf("MENU 3\n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie letras\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("Ingrese opcion: ");

        if (!leerEntero(&opcion)) {
            opcion = 0;
        }

        switch (opcion) {
            case 1: validarFecha();  break;
            case 2: serieLetras();   break;
            case 3: serieNumeros();  break;
            case 4:
                /* RF-05 */
                printf("\nSalir...\n");
                printf("Programa cerrado. Si algo fallo, fue culpa del compilador. Si funciono, fue talento puro xD.\n");
                printf("Ahora si, a descansar el cerebro. Chao!\n\n");
                break;
            default:
                printf("\nOpcion no valida\n\n");
        }

        if (opcion != 4) {
            system("pause");
            system("cls");
        }
    } while (opcion != 4);

    return 0;
}
