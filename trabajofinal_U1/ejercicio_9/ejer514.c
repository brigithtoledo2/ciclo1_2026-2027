#include <stdio.h>

void main() {

int DIVI = 100;
int x = 0;
float a, porcentaje = 0.0;
int condicion;

printf("Ingrese un numero entero: ");
scanf("%d", &x);
printf("Ingrese un numero decimal: ");
scanf("%f", &a);

porcentaje = (x * a / 100);
condicion = (porcentaje > 50 && porcentaje < 90);

printf("El porcentaje es: %% %.2f \n", porcentaje);

if (condicion) {
    printf("El porcentaje esta entre 50 y 90. \nCumple con la condicion.");
} else {
    printf("El porcentaje no esta entre 50 y 90. \nNo cumple con la condicion.");

}



}
