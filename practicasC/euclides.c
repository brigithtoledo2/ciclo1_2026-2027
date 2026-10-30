#include <stdio.h>

void main () {
    int a = 35;
    int b = 25;
    int cociente = 0;
    int residuo = 0;
    int operacion1 = 0;
    int operacion2 = 0;
    int operacion3 = 0;
    int ecuacion = 0;

    operacion1 = a / b;
    cociente = operacion1;
    residuo = a % b;
    ecuacion = (a - (b * cociente) + residuo);

    printf("La operacion 1 es: \n");
    printf("Su cociente es: %d \n", cociente);
    printf("Su residuo es: %d \n", residuo);
    printf("La ecuacion es: %d \n", ecuacion);

    operacion2 = b / residuo;
    cociente = operacion2;
    ecuacion = (b - (residuo * cociente) + residuo);

    printf("La operacion 2 es: \n");
    printf("Su cociente es: %d \n", cociente);
    printf("Su residuo es: %d \n", residuo);
    printf("La ecuacion es: %d \n", ecuacion);

    operacion3 = operacion2 / residuo;
    cociente = operacion3;
    ecuacion = (operacion2 - (residuo * cociente)) + 0;

    printf("La operacion 3 es: \n");
    printf("Su cociente es: %d \n", cociente);
    printf("Su residuo es: %d \n", residuo);
    printf("La ecuacion es: %d \n", ecuacion);


}