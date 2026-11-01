#include <stdio.h>

void main() {
    int PIN_CORRECTO = 1234;
    int MAX_INTENTOS = 3;
    int pin_ingresado, intentos = 0;
    float mitad = 0;
    int acceso_permitido;
    
    while (intentos < MAX_INTENTOS && !acceso_permitido) {
        printf("Ingrese el PIN: ");
        scanf("%d", &pin_ingresado);

        acceso_permitido = (pin_ingresado == PIN_CORRECTO);
        intentos = (intentos + 1);
        
        if (acceso_permitido) {
            printf("PIN correcto. \nEstado: Acceso permitido.\n");
        } else {
            printf("PIN incorrecto. \nEstado: Acceso denegado. \nIntentos restantes: %d \n", MAX_INTENTOS - intentos);
        }

    }

    mitad = intentos / 2.0;
    printf("La mitad de los intentos es: %.1f\n", mitad);

}
