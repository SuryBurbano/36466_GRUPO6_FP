#include <stdio.h>
//Problema 1.3. Divisible
//Desarrolla un programa que lea dos números enteros por teclado y determine si el primero es
//divisible por el segundo. Se mostrará por pantalla el resultado.

int main() {
    float x, absoluto, resultado;

    printf("Ingrese un numero: ");
    scanf("%f", &x);

    absoluto = fabsf(x);
    resultado = absoluto * absoluto * absoluto;

    printf("El resultado es: %.2f\n", resultado);

    return 0;
}
