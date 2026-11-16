// Este es un menú de 3 opciones donde vamos a poder visualizar vectores y matrices y por último una opción de salida del codigo para finalizar
// elaborado por estudiantes del primer semestre de telecomunicaciones en la asignatura de programación, grupo #6
// integrantes: Luis Moposita, Sury Burbano, Cesar Guacho, Rober Campo
//NRC:36466



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

/* Lee un entero > 0 (rechaza 0, negativos, decimales y letras) */
int leerEnteroPositivo(const char *mensaje) {
    char linea[50];                               // aqui se guarda lo que escribe el usuario
    char *fin;                                    // indica donde termino de convertir
    long valor;                                   // numero convertido
    while (1) {                                   // repite hasta que sea valido
        printf("%s", mensaje);                    // muestra el mensaje
        fgets(linea, sizeof(linea), stdin);       // lee toda la linea como texto
        valor = strtol(linea, &fin, 10);          // convierte el texto a entero
        if (fin != linea && (*fin == '\n' || *fin == '\0') && valor > 0) {
            return (int)valor;                    // era solo un entero mayor que 0
        }
        printf("  Error: ingrese un entero mayor que 0.\n");  // aviso de error
    }
}

/* Lee un float > 0 (debe llevar punto decimal: 5 da error, 5.0 es valido) */
float leerFloatPositivo(const char *mensaje) {
    char linea[50];                               // texto escrito por el usuario
    char *fin;                                    // donde termino de convertir
    double valor;                                 // numero convertido
    while (1) {                                   // repite hasta que sea valido
        printf("%s", mensaje);                    // muestra el mensaje
        fgets(linea, sizeof(linea), stdin);       // lee toda la linea como texto
        valor = strtod(linea, &fin);              // convierte el texto a decimal
        if (fin != linea && (*fin == '\n' || *fin == '\0')
            && valor > 0 && strchr(linea, '.') != NULL) {  // exige el punto decimal
            return (float)valor;                  // era un flotante valido
        }
        printf("  Error: ingrese un numero flotante mayor que 0 (ej: 2.5).\n");
    }
}

void opcionVectores(void) {
    int n, i;                                     // n = tamano, i = contador
    int *v;                                       // puntero al vector de enteros
    char msg[40];

    printf("\n--- VECTORES (enteros) ---\n");     // titulo
    n = leerEnteroPositivo("Tamano del vector: ");  // pide el tamano (>0)
    v = (int *)malloc(n * sizeof(int));           // reserva memoria para n enteros
    if (v == NULL) {                              // si no hubo memoria
        printf("No hay memoria suficiente.\n");   // avisa
        return;                                   // sale
    }

    for (i = 0; i < n; i++) {                     // recorre cada posicion
        sprintf(msg, "v[%d] = ", i);
        v[i] = leerEnteroPositivo(msg);           // pide y valida el dato
    }

    printf("\nVector ingresado:\n[ ");            // inicio de la impresion
    for (i = 0; i < n; i++) {                     // recorre el vector
        printf("%d ", v[i]);                      // imprime cada elemento
    }
    printf("]\n");                                // cierre

    free(v);                                      // libera la memoria
}

void opcionMatrices(void) {
    int filas, cols, i, j;                        // dimensiones y contadores
    float **m;                                    // la matriz
    char msg[40];
    printf("\n--- MATRICES (flotantes) ---\n");
    filas = leerEnteroPositivo("Numero de filas: ");     // filas (entero > 0)
    cols  = leerEnteroPositivo("Numero de columnas: ");  // columnas (entero > 0)

    m = (float **)malloc(filas * sizeof(float *));  // reserva el arreglo de filas
    if (m == NULL) {                              // si no hubo memoria
        printf("No hay memoria suficiente.\n");   // avisa
        return;                                   // sale
    }
    for (i = 0; i < filas; i++) {                 // para cada fila
        m[i] = (float *)malloc(cols * sizeof(float));  // reserva sus columnas
        if (m[i] == NULL) {                       // si no hubo memoria
            printf("No hay memoria suficiente.\n");
            return;
        }
    }

    for (i = 0; i < filas; i++) {                 // recorre filas
        for (j = 0; j < cols; j++) {              // recorre columnas
            sprintf(msg, "m[%d][%d] = ", i, j);
            m[i][j] = leerFloatPositivo(msg);     // pide y valida el flotante
        }
    }

    printf("\nMatriz ingresada:\n");               // titulo de impresion
    for (i = 0; i < filas; i++) {                 // recorre filas
        for (j = 0; j < cols; j++) {              // recorre columnas
            printf("%.2f\t", m[i][j]);            // 2 decimales y tabulacion
        }
        printf("\n");                             // salto de linea por fila
    }

    for (i = 0; i < filas; i++) {                 // libera cada fila
        free(m[i]);
    }
    free(m);                                      // libera el arreglo de filas
}

int main(void) {
    int opcion;                                   // opcion del menu
    char linea[50];                               // texto escrito por el usuario
    char *fin;                                    // fin de la conversion

    do {                                          // repite el menu
        printf("\n===== MENU =====\n");            // titulo
        printf("1. Ingreso e impresion de vectores (enteros)\n");
        printf("2. Ingreso e impresion de matrices (flotantes)\n");
        printf("3. Salir\n");
        printf("Opcion: ");                       // pide la opcion

        fgets(linea, sizeof(linea), stdin);       // lee la linea
        opcion = (int)strtol(linea, &fin, 10);    // la convierte a entero
        if (fin == linea || (*fin != '\n' && *fin != '\0')) {
            opcion = 0;                           // no era un numero: invalida
        }

        switch (opcion) {                         // segun la opcion
            case 1: opcionVectores(); break;      // vectores
            case 2: opcionMatrices(); break;      // matrices
            case 3:
                printf("\nFinalizando...\n");     // mensaje de salida
                Sleep(1500);                      // espera 1.5 s (windows.h)
                break;
            default: printf("Opcion invalida. Elija 1, 2 o 3.\n");
        }
    } while (opcion != 3);                        // sigue hasta elegir 3

    return 0;
}
