#include <stdio.h>

void main() {
    float PI = 3.14159;
    float radio, area = 0.0;
    
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);
    
    if (radio >= 0) {
        area = (PI * radio * radio);
        printf("El area del circulo es: %.2f\n", area);
    } else {
        printf("Error: el radio debe ser positivo");
    }

}   
