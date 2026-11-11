#include <stdio.h>

void main () {
    int CAPACIDAD = 50;
    float distancia, combustible, rendimiento;
    float combustible_disponible, autonomia;

    printf("Ingrese la distancia a recorrida (km): ");
    scanf("%f", &distancia);
    printf("Ingrese la cantidad de combustible (litros): ");
    scanf("%f", &combustible);

    rendimiento = distancia / combustible;

    if (rendimiento < 8) {
        printf("El rendimiento es deficiente. \n");

    } else if (8 >= rendimiento && 12 >= rendimiento ) {
        printf("El rendimiento es regular. \n");

    } else if (12 >= rendimiento && 16 >= rendimiento ) {
        printf("El rendimiento es bueno. \n");

    } else if (rendimiento > 16) {
        printf("El rendimiento es excelente. \n");
    }

    combustible_disponible = CAPACIDAD - combustible;
    autonomia = rendimiento * combustible_disponible;

    printf("El rendimiento del vehiculo es: %.2f km/l \n", rendimiento);
    printf("El combustible disponible es: %.2f litros \n", combustible_disponible);
    printf("La autonomia del vehiculo es: %.2f km \n", autonomia);

     if (autonomia <= 50) {
        printf("Advertencia: el combustible es bajo. \n");
    }

}