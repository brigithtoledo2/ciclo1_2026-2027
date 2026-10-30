#include <stdio.h>

void main () {
    float DENSIDAD = 1000.0;
    float GRAVEDAD = 9.81;
    float P_ATM = 101325.0; 
    float profundidad, presion_man, presion_abs;

    printf("Ingrese la profundidad en metros: ");
    scanf("%lf", &profundidad);

    if (profundidad < 0) {
        printf("La profundidad no puede ser negativa.\n");
    }

    presion_man = DENSIDAD * GRAVEDAD * profundidad;
    presion_abs = P_ATM + presion_man;

    printf("Presion manometrica: %.2f Pa\n", presion_man);
    printf("Presion absoluta:    %.2f Pa\n", presion_abs);

}