#include <stdio.h>

void main() {

float PI = 3.14159;
float radio = 0.0;
float area = 0.0;

printf("Ingrese el radio del circulo: ");
scanf("%f", &radio);

area = (PI * radio * radio);
printf("El área del circulo es: %.2f\n", area);

}   