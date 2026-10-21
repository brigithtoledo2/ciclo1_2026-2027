#include <stdio.h>

void main() {

int z, s = 0;
int cociente, residuo = 0;
float diferencia, promedio = 0.0;

printf("Ingrese el primer numero: ");
scanf("%d", &z);

printf("Ingrese el segundo numero: ");
scanf("%d", &s);

if (s != 0) {
    cociente = z / s;
    residuo = z % s;

    promedio = (z + s) / 2.0;
    diferencia = cociente - promedio;

    printf("El promedio es: %.2f\n", promedio);
    printf("La diferencia es: %.2f\n", diferencia);

    printf("El cociente es: %d\n", cociente);
    printf("El residuo es: %d\n", residuo);


} else {
    printf("Error: El segundo numero no puede ser cero.\n");
}

}