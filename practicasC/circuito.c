#include <stdio.h>

void main () {
    float CORRIENTE_MAX = 2.0;
    float POTENCIA_MAX = 20.0;
    float RESISTENCIA_EQMIN = 3.0;
    float v, r1, r2, req, i, p = 0.0;
    int conexion;

    printf("Ingrese la fuente de tension: ");
    scanf("%f", &v);
    printf("Ingrese la primera resistencia: ");
    scanf("%f", &r1);
    printf("Ingrese la segunda resistencia: ");
    scanf("%f", &r2);

    printf("Seleccione una conexion: \n1. En serie. \n2. En paralelo. \n");
    scanf("%d", &conexion);

    if (conexion == 1) {
        req = r1 + r2;
        i = v / req;
        p = v * i;
        printf("La resistencia equivalente es: %.2f \n", req);
        printf("La corriente total es: %.2f \n", i);
        printf("La potencia total es: %.2f \n", p);
    
    } else if (conexion == 2) {
        req = (r1 * r2) / (r1 + r2);
        i = v / req;
        p = v * i;
        printf("La resistencia equivalente es: %.2f \n", req);
        printf("La corriente total es: %.2f \n", i);
        printf("La potencia total es: %.2f \n", p);
    }
    
    if (req < RESISTENCIA_EQMIN) {
        printf("Error: la resistencia equivalente no cumple el minimo permitido. \n");
    }
    
    if (i > CORRIENTE_MAX) {
        printf("Se excede el limite de corriente.\n");
    } 

    if (p > POTENCIA_MAX) {
        printf("Se excede el limite de la potencia.\n");  
    } 
    
    if (i > CORRIENTE_MAX && p > POTENCIA_MAX) {
       printf("El circuito no seguro. \n");
    } else {
        printf("El circuito es seguro. \n");
    }

}