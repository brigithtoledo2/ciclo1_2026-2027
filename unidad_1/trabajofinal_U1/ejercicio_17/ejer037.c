#include <stdio.h>

void main() {
    int MULTI2 = 2;
    int MULTI3 = 3;
    int y, doble, triple = 0;
    int condicion = 0;
    float inverso = 0.0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &y);

    doble = (2 * y);
    triple = (3 * y);
    condicion = (doble < triple && doble > 0);

    printf("Valores de todas las variables auxiliares: \n");
    printf("y: %d \n", y);
    printf("El doble es: %d \n", doble);
    printf("El triple es: %d \n", triple);

    if (condicion) {
        inverso = (1.0 / doble);
        printf("El inverso del doble es: %f \n", inverso);
        
    } else {
        printf("No se puede calcular el inverso porque el doble es cero.\n");
    }

}

