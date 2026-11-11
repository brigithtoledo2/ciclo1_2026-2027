#include <stdio.h>

#include <math.h>

int main() {
    float TASA_CAMBIO = 1.08;
    float euros, dolares = 0.0;
    float absoluto, raiz = 0.0;
    int condicion = 0;
    int estado = 0;

    printf("Ingrese el monto en euros: ");
    scanf("%f", &euros);

    dolares = (euros * TASA_CAMBIO);
    condicion = (euros > 0);

    if (dolares < 0) {
        absoluto = -dolares;

    } else {
        absoluto = dolares;
    }

    raiz = sqrt(absoluto);

    printf("%.2f euros equivalen a %.2f dolares \n", euros, dolares);
    printf("La raiz cuadrada del valor absoluto es: %.2f \n", raiz);
    printf("Estado: %d\n", estado);

    if (condicion) {
        printf("El monto es valido porque es mayor que cero.\n");

    } else {
        printf("Error: el monto en euros debe ser mayor que cero.\n");
    }

}

