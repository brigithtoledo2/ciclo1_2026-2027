#include <stdio.h>

void main() {
    int MULTI = 3;
    float yardas, pies = 0.0;
    int condicion = 0;

    printf("Ingrese la distancia en yardas: ");
    scanf("%f", &yardas);

    pies = (yardas * 3);
    condicion = (pies > 0);

    printf("%.2f yardas equivalen a %.2f pies \n", yardas, pies);

    if (pies > 0) {
        printf("El resultado es positivo. \n");

    } else {
        printf("El resultado es negativo. \n");
    } 
}
