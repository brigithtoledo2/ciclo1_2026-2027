#include <stdio.h>

void main() {

    int numero = 0;
    int unidad = 0;
    int decena = 0;
    int centena = 0;
    int suma = 0;

    printf("Ingrese un numero de 3 digitos:");
    scanf("%d", &numero);


    if (numero>= 100 && numero<= 999) {
        unidad = numero % 10;
        decena = (numero / 10 % 10) * 10;
        centena = (numero / 100) * 100;

        suma = unidad + decena + centena;

        printf("La unidad es: %d \n", unidad);
        printf("La decena es: %d \n", decena);
        printf("La centena es: %d \n", centena);

    } else {
        printf("El numero no es valido");

    }
    
}