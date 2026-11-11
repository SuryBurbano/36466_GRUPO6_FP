//realizar un codigo para que se forme un cuadrado, grupo 6

#include <stdio.h>

int main() {
    int n;

    printf("Ingrese el tamaño del cuadrado: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
