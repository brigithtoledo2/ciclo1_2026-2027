#include <stdio.h>

void main() {
    int anio, mes, dia, k, j = 0;
    int DIVISOR = 7;
    int diaSemana = -1;
    int AJUSTE_MES = 12;

    printf("Ingrese el anio: \n");
    scanf("%d", &anio);

    printf("Ingrese el mes en numeros (Enero 1, Febrero 2, etc...): \n");
    scanf("%d", &mes);

    printf("Ingrese el dia en valor numerico: \n");
    scanf("%d", &dia);

    if (mes > 0 && mes <= 2) {
        mes = mes + AJUSTE_MES;
        anio = anio - 1;
    }

    k = anio % 100;
    j = anio / 100;

    diaSemana = (dia + (13 * (mes + 1) /5) + k + (k / 4) + (j / 4) + (5 * j)) % 7;
    printf("El dia de la semana es: %d\n", diaSemana);
    
}