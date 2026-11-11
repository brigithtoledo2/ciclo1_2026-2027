#include <stdio.h>

void main() {
    float FACTOR = 0.393701;
    float cm, pulgadas, cubo = 0.0;
    int condicion;

    printf("Ingrese la medida en centimetros: ");
    scanf("%f", &cm);

    pulgadas = (cm * FACTOR);
    condicion = (pulgadas > 0);
    cubo = (pulgadas * pulgadas * pulgadas);

    printf("%.2f cm equivalen a %.2f pulgadas \n", cm, pulgadas);
    printf("El resultado de pulgadas al cubo es: %.2f \n", cubo);

    if (condicion) {
        printf("La medida es valida. \n");

    } else {
        printf("La medida no es mayor que 0. \n");
    }

}
