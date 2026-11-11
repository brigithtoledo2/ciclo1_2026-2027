#include <stdio.h>

void main() {
    int DIVISOR = 3;
    float largo, ancho, alto = 0.0;
    float volumen, promedio, diferencia = 0.0;
    int condicion;

    printf("Ingrese el largo: ");
    scanf("%f", &largo);
    printf("Ingrese el ancho: ");
    scanf("%f", &ancho);
    printf("Ingrese el alto: ");
    scanf("%f", &alto);

    condicion = (largo > 0 && ancho > 0 && alto > 0);

    if (condicion) {
        volumen = (largo * ancho * alto);
        promedio = ((largo + ancho + alto) / 3);
        diferencia = (volumen - promedio);
        printf("El volumen del prisma es: %.2f \n", volumen);
        printf("El promedio de las medidas es: %.2f \n", promedio);
        printf("La diferencia del resultado es: %.2f \n", diferencia);

    } else {
        printf("Error: largo, ancho y alto deben ser mayores que cero.\n");
    }

}
