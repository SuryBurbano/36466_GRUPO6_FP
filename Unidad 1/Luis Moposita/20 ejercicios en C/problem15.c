//Problema 1.15. Año bisiesto
//Desarrolla un programa que lea un año y determine si es bisiesto. Un año es bisiesto si es divisible
//entre 4, excepto los años divisibles entre 100, que solo lo son si también son divisibles entre 400.

#include <stdio.h>

int main()
{
    int anio;

    printf("Ingresa un anio: ");
    scanf("%d", &anio);

    if (anio <= 0)
    {
        printf("Error: el anio debe ser positivo.\n");
    }
    else if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
    {
        printf("%d es bisiesto\n", anio);
    }
    else
    {
        printf("%d NO es bisiesto\n", anio);
    }

    return 0;
}
