// Este es un menú de 3 opciones donde vamos a poder visualizar vectores y matrices y por último una opción de salida del codigo para finalizar
// elaborado por estudiantes del primer semestre de telecomunicaciones en la asignatura de programación, grupo #6
// integrantes: Luis Moposita, Sury Burbano, Cesar Guacho, Rober Campo
//NRC:36466


#include <stdio.h>
#include <stdlib.h>

/* Limpia el buffer de entrada */
void limpiarBuffer(void) {
    int c; //guarda cada caracter leido
    while ((c = getchar()) != '\n' && c != EOF); //lee y descarta hasta el Enter
}

/* Lee un entero > 0 (rechaza 0, negativos y letras) */
int leerEnteroPositivo(const char *mensaje) {
    int valor; //aqui se guarda el numero
    while (1) {  // repite hasta que sea valido
        printf("%s", mensaje);
        if (scanf("%d", &valor) == 1 && valor > 0) {
            limpiarBuffer();
            return valor;
        }
        printf("  Error: ingrese un entero mayor que 0.\n");
        limpiarBuffer();
    }
}

/* Lee un float > 0 (rechaza 0, negativos y letras) */
float leerFloatPositivo(const char *mensaje) {
    float valor;
    while (1) {
        printf("%s", mensaje);
        if (scanf("%f", &valor) == 1 && valor > 0) {
            limpiarBuffer(); //borra lo que sobre
            return valor;
        }
        printf("  Error: ingrese un numero mayor que 0.\n");
        limpiarBuffer();
    }
}

void opcionVectores(void) {
    int n, i;  // n = tamano, i = contador
    int *v;    // puntero al vector de enteros
    char msg[40];

    printf("\n--- VECTORES (enteros) ---\n");
    n = leerEnteroPositivo("Tamano del vector: ");
    v = (int *)malloc(n * sizeof(int));  // reserva memoria para n enteros
    if (v == NULL) {
        printf("No hay memoria suficiente.\n");
        return;
    }

    for (i = 0; i < n; i++) {
        sprintf(msg, "v[%d] = ", i);
        v[i] = leerEnteroPositivo(msg);
    }

    printf("\nVector ingresado:\n[ ");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("]\n");

    free(v);  // libera la memoria reservada
}

void opcionMatrices(void) {
    int filas, cols, i, j;
    float **m;
    char msg[40];

    printf("\n--- MATRICES (flotantes) ---\n");
    filas = leerEnteroPositivo("Numero de filas: ");
    cols  = leerEnteroPositivo("Numero de columnas: ");

    m = (float **)malloc(filas * sizeof(float *));
    if (m == NULL) {
        printf("No hay memoria suficiente.\n");
        return;
    }
    for (i = 0; i < filas; i++) {
        m[i] = (float *)malloc(cols * sizeof(float));
        if (m[i] == NULL) {
            printf("No hay memoria suficiente.\n");
            return;
        }
    }

    for (i = 0; i < filas; i++) {
        for (j = 0; j < cols; j++) {
            sprintf(msg, "m[%d][%d] = ", i, j);
            m[i][j] = leerFloatPositivo(msg);
        }
    }

    printf("\nMatriz ingresada:\n");
    for (i = 0; i < filas; i++) {
        for (j = 0; j < cols; j++) {
            printf("%.2f\t", m[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < filas; i++) {
        free(m[i]);
    }
    free(m);
}

int main(void) {
    int opcion;

    do {
        printf("\n=========== MENU INSANO DEL SIX SEVEN ============\n");
        printf("1. Ingreso e impresion de vectores (enteros)\n");
        printf("2. Ingreso e impresion de matrices (flotantes)\n");
        printf("3. Salir\n");
        printf("Opcion: ");

        if (scanf("%d", &opcion) != 1) {
            opcion = 0;
        }
        limpiarBuffer();

        switch (opcion) {
            case 1: opcionVectores(); break;
            case 2: opcionMatrices(); break;
            case 3: printf("\nGRACIAS POR ATENDER ESTA ES LA PRESENTACIÓN DEL GRUPO SIX SEVEN\n"); break;
            default: printf("Opcion invalida. Elija 1, 2 o 3.\n");
        }
    } while (opcion != 3);   // sigue hasta elegir 3

    return 0;
}
