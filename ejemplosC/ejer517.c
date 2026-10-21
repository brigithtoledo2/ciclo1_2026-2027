#include <stdio.h>
#include <stdbool.h>

void main() {

    float APROBADO = 7.0;
    char nombre[20];
    float nota1 = 0.0;
    float nota2 = 0.0;
    float nota3 = 0.0;
    float promedio = 0.0;
    bool condicion = (promedio >= APROBADO);

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
    (condicion) ? printf("El estudiante aprobo\n") : printf("El estudiante no aprobo\n");

}