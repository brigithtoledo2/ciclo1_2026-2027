#include <stdio.h>
#include <stdbool.h>

int main() {
    int divi_diez = 10;
    int divi_cien = 100;
    int divi_mil = 1000;
    int p1 = 1;
    int p2 = 2;
    int p3 = 3;
    int p4 = 4;
    int codigo;
    int d1, d2, d3, d4;
    int digito_veri;
    int codigo_vali;

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