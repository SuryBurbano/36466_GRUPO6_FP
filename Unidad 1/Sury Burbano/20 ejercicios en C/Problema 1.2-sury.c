#include <stdio.h>
#include <math.h>

int main() {
    float x, absoluto, resultado;

    printf("Ingrese un numero: ");
    scanf("%f", &x);

    absoluto = fabsf(x);
    resultado = absoluto * absoluto * absoluto;

    printf("El resultado es: %.2f\n", resultado);

    return 0;
}
