#include <stdio.h>

int main() {
    float num1, num2, media;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    media = (num1 + num2) / 2;

    printf("La media es: %.2f\n", media);

    return 0;
}
