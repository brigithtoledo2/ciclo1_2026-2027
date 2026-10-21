#include <stdio.h>

void main() {

float PORCENTAJE =100.0;
float UMBRAL_UTILIDAD = 0.0;
float BONO_EMPLEADOS = 0.10;
float ingresos_totales, costos_fijos, costos_variables = 0.0;
float porcentaje_impuestos = 0.0;
float utilidad_bruta, impuestos, utilidad_neta = 0.0;
float bono = 0.0;
int es_rentable;

printf("Ingrese los ingresos totales: ");
scanf("%f", &ingresos_totales);
printf("Ingrese los costos fijos: ");
scanf("%f", &costos_fijos);
printf("Ingrese los costos variables: ");
scanf("%f", &costos_variables);
printf("Ingrese el porcentaje de impuestos: ");
scanf("%f", &porcentaje_impuestos);

utilidad_bruta = ingresos_totales - (costos_fijos + costos_variables);
impuestos = utilidad_bruta * porcentaje_impuestos / PORCENTAJE;
utilidad_neta = utilidad_bruta - impuestos;
es_rentable = (utilidad_neta > UMBRAL_UTILIDAD);
bono = (utilidad_neta > UMBRAL_UTILIDAD) ? utilidad_neta * BONO_EMPLEADOS : 0.0;


printf("Los ingresos totales son: %.2f\n", ingresos_totales);
printf("Los costos fijos son: %.2f\n", costos_fijos);
printf("Los costos variables son: %.2f\n", costos_variables);
printf("La utilidad bruta es: %.2f\n", utilidad_bruta);
printf("Los impuestos son: %.2f\n", impuestos);
printf("La utilidad neta es: %.2f\n", utilidad_neta);
printf("El bono para empleados es: %.2f\n", bono);

(es_rentable) ? printf("La empresa genero utilidad\n") : printf("La empresa no genero utilidad\n");

}
