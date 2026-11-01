#include <stdio.h>

void main() {

    float ONZA_GRAMO = 28.3495;
    float onzas, gramos = 0.0;
    float inverso = 0.0;
    int condicion;

    printf("Ingrese el peso en onzas: ");
    scanf("%f", &onzas);

    gramos = onzas * ONZA_GRAMO;
    condicion = (gramos > 0);
    
    printf("%.2f onzas equivalen a %.2f gramos\n", onzas, gramos);
    
    if (gramos > 0) {
        inverso = 1 / gramos;
        printf("El inverso es: %f\n", inverso);

    } else {
        printf("No se puede calcular el inverso porque gramos es cero.\n"); 
    }
    }
    
