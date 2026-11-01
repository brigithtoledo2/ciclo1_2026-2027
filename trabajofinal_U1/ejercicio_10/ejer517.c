#include <stdio.h>

void main() {

    float APROBADO = 7.0;
    char nombre[20];
    float nota1, nota2, nota3 = 0.0, promedio = 0.0;
    int condicion;

    printf("Ingrese el nombre del estudiante: ");
    scanf("%s", nombre);
    printf("Ingrese la primera nota: ");
    scanf("%f", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%f", &nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%f", &nota3);

    promedio = (nota1 + nota2 + nota3) / 3;
    condicion = (promedio >= APROBADO);

    printf("El promedio del estudiante es: %.2f\n", promedio);

    if (condicion) {
        printf("El estudiante aprobo.\n");

    } else {
        printf("El estudiante no aprobo.\n");
    }
}


