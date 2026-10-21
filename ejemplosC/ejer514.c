#include <stdio.h>
#include <stdbool.h>

void main() {

int DIVI = 100;
int x = 0;
float a = 0.0;
float porcentaje = 0.0;
bool condicion;

printf("Ingrese un numero entero: ");
scanf("%d", &x);
printf("Ingrese un numero decimal: ");
scanf("%f", &a);

porcentaje = (x * a / 100);
condicion = (porcentaje > 50 && porcentaje < 90);

printf("El porcentaje es: %.2f\n", porcentaje);
printf("Resultado de la expresion logica es: %s\n", condicion ? "true" : "false");

}
