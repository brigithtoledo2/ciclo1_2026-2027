#include <stdio.h>
//#include <string.h>

void main() {
    /*crear un sistema que pida el valor total de la factura 
    y de que tipo es: si es por servicios profesionales se detiene
    el 10%, si es por servicios educativos el 8% se debe devolver
    valor retenido*/
    //datos de entrada
    float valor_fac = 0.0;
    int seleccion = 0; /*1 profesional y 2 educativo*/
    float PROFESIONAL = 0.1;
    float EDUCATIVO = 0.08;
    float retencion = 0.0;
    //entrada de datos-leer
    printf("Ingrese el valor de la factura: \n");
    scanf("%f", &valor_fac);

    printf("Ingrese el tipo de factura. \n1. Factura profesional. \n2. Factura educativa. \n");
    scanf("%d", &seleccion);

    if (seleccion == 1) {
        retencion = valor_fac * PROFESIONAL;
    } else if (seleccion == 2) {
        retencion = valor_fac * EDUCATIVO;
    } else {
        printf("USTED NO A SELECCIONADO UN VALOR VALIDO.\n");
    }
    printf("El valor de la retencion es: $ %.2f\n", retencion);
}