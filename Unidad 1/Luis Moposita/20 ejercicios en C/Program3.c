#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Ingresa el primer numero entero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero entero: ");
    scanf("%d", &num2);

    if (num2 == 0)
    {
        printf("Error: no se puede dividir entre cero.\n");
    }
    else if (num1 % num2 == 0)
    {
        printf("%d es divisible por %d\n", num1, num2);
    }
    else
    {
        printf("%d NO es divisible por %d\n", num1, num2);
    }

    return 0;
}
