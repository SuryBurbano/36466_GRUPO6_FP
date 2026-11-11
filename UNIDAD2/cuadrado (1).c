#include <stdio.h>

int main() {
    int n;

    printf("Ingrese el tamaño del cuadrado: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
