#include <stdio.h>

int main() {
    int n, i = 1, resultado;

    printf("Ingrese un numero entero no negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido.\n");
    } else {
        while (i <= n / i) {
            i++;
        }

        resultado = i - 1;

        printf("La raiz cuadrada entera es: %d\n", resultado);
    }

    return 0;
}
