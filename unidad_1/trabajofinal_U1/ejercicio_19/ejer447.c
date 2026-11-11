#include <stdio.h>
#include <math.h>

void main() {
    int EXPO = 2;
    float a, cuadrado = 0.0;
    int condicion = 0;
    int parte_entera, resto = 0;

    printf("Ingrese un numero real: ");
    scanf("%f", &a);

    cuadrado = pow(a, 2);
    condicion = (cuadrado >= 0);
    parte_entera = (int)cuadrado;
    resto = (parte_entera % 2);

    if (condicion) {
        printf("El cuadrado de %.2f es %.2f \n", a, cuadrado);
    } else {
        printf("Error: el cuadrado no puede ser negativo. \n");
    }

    printf("El resto de %d entre 2 es: %d \n", parte_entera, resto);
    printf("Sigue adelante y no te rindas. Tu esfuerzo vale la pena. \n");
}

