#include <stdio.h>
//Problema 1.11. Serie de Fibonacci
//Desarrolla un programa que lea un entero n ≥ 1 y muestre los primeros n términos de la serie de
//Fibonacci (0, 1, 1, 2, 3, 5, 8, …), donde cada término es la suma de los dos anteriores.

int main() {
    int n, anterior = 0, actual = 1;
    int siguiente, i;

    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Ingrese un numero mayor o igual a 1.\n");
    } else {
        for (i = 1; i <= n; i++) {
            printf("%d ", anterior);

            siguiente = anterior + actual;
            anterior = actual;
            actual = siguiente;
        }
    }

    printf("\n");
    return 0;
}
