#include <stdio.h>

void main() {
    int DIVISOR = 5;
    float e1, e2, e3, e4, e5, promedio, maximo = 0.0;
    int condicion = 0;

    printf("Ingrese la estatura de la persona 1 (m): ");
    scanf("%f", &e1);
    printf("Ingrese la estatura de la persona 2 (m): ");
    scanf("%f", &e2);
    printf("Ingrese la estatura de la persona 3 (m): ");
    scanf("%f", &e3);
    printf("Ingrese la estatura de la persona 4 (m): ");
    scanf("%f", &e4);
    printf("Ingrese la estatura de la persona 5 (m): ");
    scanf("%f", &e5);

    promedio = ((e1 + e2 + e3 + e4 + e5) / 5);
    condicion = (promedio > 0);
    maximo = e1;
    
    if (e2 > maximo) {
        maximo = e2;
    }
    if (e3 > maximo) {
        maximo = e3;
    }
    if (e4 > maximo) {
        maximo = e4;
    }
    if (e5 > maximo) {
        maximo = e5;
    }

    if (condicion) {
        printf("La estatura promedio es: %.2f m \n", promedio);
        printf("La estatura maxima es: %.2f m \n", maximo);

    } else {
        printf("Error: el promedio debe ser mayor que cero. \n");
    }
    /*Justificación de los tipos de dato:
    - e1, e2, e3, e4, e5 son float porque son estaturas en metros y llevan decimales. Con int se cortarían a 1 y se 
    perdería la medida real.
    - Promedio es float porque se obtiene con una división, y al dividir la suma entre 5 casi siempre salen decimales.
    - Maximo es float: porque guarda una de las estaturas (la mayor), así que debe ser del mismo tipo que ellas. 
    Si fuera int, 1.80 se guardaría como 1.*/
}
