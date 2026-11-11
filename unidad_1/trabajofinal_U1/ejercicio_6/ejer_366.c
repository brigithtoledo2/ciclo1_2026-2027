#include <stdio.h>

void main() {
    int DIVI_DIEZ = 10;
    int DIVI_CIEN = 100;
    int DIVI_MIL = 1000;
    int P1 = 1;
    int P2 = 2;
    int P3 = 3;
    int P4 = 4;
    int codigo = 0;
    int d1, d2, d3, d4 = 0;
    int digito_veri, codigo_vali = 0;

    printf("Por favor ingrese el codigo: ");
    scanf("%d", &codigo);

    if (codigo >= 1000 && codigo <= 9999) {
    d1 = codigo / 1000;
    d2 = (codigo / 100) % 10;
    d3 = (codigo / 10) % 10;
    d4 = codigo % 10;

    digito_veri = (d1 * 1 + d2 * 2 + d3 * 3 + d4 * 4) % 10;
    codigo_vali = (digito_veri == d4);

    printf("El digito uno es %d\n", d1);
    printf("El digito dos es %d\n", d2);
    printf("El digito tres es %d\n", d3);
    printf("El digito cuatro es %d\n", d4);
    printf("El digito verificador es %d\n", digito_veri);

    if (codigo_vali) {
        printf("El codigo es valido \n");
    } else {
        printf("El codigo no es valido \n");
    }
    } else {
    printf("Error: por favor ingrese un codigo de 4 digitos: \n");
     
    }
    
}