#include <stdio.h>

void main() {

    int d = 0;
    int i = 0;
    int c, de, u = 0;
    
    printf("Ingrese un numero de 3 digitos:");
    scanf("%d", &d);
    
    if (100 >= d && d <= 999 ) {
        c = d / 100;
        de = (d / 10) % 10;
        u = d % 10;
        i = c + de + u;
        printf("El digito invertido es: %d \n", i);
    }
    
    
    