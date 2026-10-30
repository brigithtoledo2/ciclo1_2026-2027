#include <stdio.h>

/*Descripción de los pasos
1. Declarar las constantes con los días de cada mes y las variables del programa.
2. Leer el día, el mes y el año de la fecha.
3. Evaluar si el año es bisiesto con la expresión lógica (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)).
4. Elegir los días de febrero: 29 si el año es bisiesto y 28 si no lo es.
5. Calcular el día juliano: sumar los días de los meses anteriores al mes ingresado y luego el día actual.
6. Calcular la mitad del día juliano.
7. Mostrar la fecha, el día juliano y su mitad.
*/

void main() {
    int DIA_ENE = 31;
    int DIA_FEB = 28;
    int DIA_FEB_BISIESTO = 29;
    int DIA_MAR = 31;
    int DIA_ABR = 30;
    int DIA_MAY = 31;
    int DIA_JUN = 30;
    int DIA_JUL = 31;
    int DIA_AGOS = 31;
    int DIA_SEP = 30;
    int DIA_OCT = 31;
    int DIA_NOV = 30;
    int DIA_DIC = 31;
    int dia, mes, anio, dias_feb, dia_juliano = 0;
    float mitad = 0.0;
    int bisiesto = 0;

    printf("Ingrese el dia: ");
    scanf("%d", &dia);
    printf("Ingrese el mes: ");
    scanf("%d", &mes);
    printf("Ingrese el anio: ");
    scanf("%d", &anio); 

    bisiesto = (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0));

    if (bisiesto) {
        dias_feb = DIA_FEB_BISIESTO;
    } else {
        dias_feb = DIA_FEB;
    }

    dia_juliano = dia;

    if (mes > 1) {
        dia_juliano = dia_juliano + DIA_ENE;
    } 
    if (mes > 2) {
        dia_juliano = dia_juliano + dias_feb;
    }
    if (mes > 3) {
        dia_juliano = dia_juliano + DIA_MAR;
    }
    if (mes > 4) {
        dia_juliano = dia_juliano + DIA_ABR;
    }
    if (mes > 5) {
        dia_juliano = dia_juliano + DIA_MAY;
    }
    if (mes > 6) {
        dia_juliano = dia_juliano + DIA_JUN;
    }
    if (mes > 7) {
        dia_juliano = dia_juliano + DIA_JUL;
    }
    if (mes > 8) {
        dia_juliano = dia_juliano + DIA_AGOS;
    }
    if (mes > 9) {
        dia_juliano = dia_juliano + DIA_SEP;
    }
    if (mes > 10) {
        dia_juliano = dia_juliano + DIA_OCT;
    }
    if (mes > 11) {
        dia_juliano = dia_juliano + DIA_NOV;
    }
    if (mes > 12) {
        dia_juliano = dia_juliano + DIA_DIC;
    }

    mitad = dia_juliano / 2.0;

    printf("Fecha: %02d/%02d/%d\n", dia, mes, anio);
    printf("Dia juliano: %d \n", dia_juliano);
    printf("Mitad del dia juliano: %.2f \n", mitad);
    

}

