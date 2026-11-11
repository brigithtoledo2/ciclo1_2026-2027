#include <stdio.h>

void main () {
    /*Constantes y variables del problema*/
    float NOTA_APROBAR = 60.0;
    float PESO_NC = 0.7;
    float PESO_NL = 0.3;
    int CERTAMENES = 3;
    float c1, c2, nl, nc_necesaria, c3;

    /*Pedir los datos de las notas de los certamenes y del laboratorio*/
    printf("Ingrese C1: ");
    scanf("%f", &c1);
    printf("Ingrese C2: ");
    scanf("%f", &c2);
    printf("Ingrese NL: ");
    scanf("%f", &nl);

    /*Proceso para calcular C3*/
    nc_necesaria = (NOTA_APROBAR - PESO_NL * nl) / PESO_NC;
    c3 = CERTAMENES * nc_necesaria - c1 - c2;

    /*Presentar la solucion del problema*/
    if (c3 < 0) {
        printf("Esta aprobado con las notas actuales.\n");
    } else {
        printf("La nota minima necesaria en C3 es: %.2f\n", c3);
    }
        

}
