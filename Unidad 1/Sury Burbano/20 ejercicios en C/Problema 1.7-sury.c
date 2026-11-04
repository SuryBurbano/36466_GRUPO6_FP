#include <stdio.h>
//Problema 1.7. Raíz cuadrada entera
//Desarrolla un programa que calcule la raíz cuadrada entera por defecto de un número N positivo
//dado, que se define como el mayor número entero R > 0 tal que R² ≤ N.
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
