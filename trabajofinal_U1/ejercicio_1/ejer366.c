#include <stdio.h>

void main() {
    float BONO_CARGA = 50.0;
    float BONO_ANTIGUEDAD = 30.0;
    float DESCUENTO_ISSS = 0.03;
    float DESCUENTO_AFP = 0.0725;
    int LIMITE_ANTIGUEDAD = 10;
    float salario_bruto = 0.0; 
    int cargas, antiguedad, anios_validos = 0;
    float bonos, descuentos, salario_neto, mitad = 0.0;
    int es_mayor = 0;

    printf("Ingrese el salario bruto: \n");
    scanf("%f", &salario_bruto);

    printf("Ingrese el numero de cargas familiares: \n");
    scanf("%d", &cargas);

    printf("Ingrese los anios de antiguedad: \n");
    scanf("%d", &antiguedad);

    if (antiguedad < LIMITE_ANTIGUEDAD) {
        anios_validos = antiguedad;
    } else {
        anios_validos = LIMITE_ANTIGUEDAD;
    }

    bonos = cargas * BONO_CARGA + anios_validos * BONO_ANTIGUEDAD;
    descuentos = salario_bruto * (DESCUENTO_ISSS + DESCUENTO_AFP);
    salario_neto = salario_bruto + bonos - descuentos;
    mitad = salario_neto / 2;
    es_mayor = (salario_neto > salario_bruto);

    printf("El salario bruto es: $ %.2f \n", salario_bruto);
    printf("El salario neto es: $  %.2f \n", salario_neto);
    printf("El total de bonos es: $ %.2f \n", bonos);
    printf("El total de descuentos es: $ %.2f \n", descuentos);
    printf("La mitad del salario neto es: $ %.2f \n", mitad); 
    printf("Conclusiones: \n");
    if (es_mayor) {
        printf("1. Neto > Bruto  : Verdadero \n");
        printf("2. Los bonos superan a los descuentos, por eso el neto es mayor que el bruto.\n");
    } else {
        printf("1. Neto > Bruto : Falso \n");
        printf("2. Los descuentos superan a los bonos, por eso el neto es menor o igual que el bruto.\n");
    }

    printf("3. Solo se pagan bonos por un maximo de 10 anios de antiguedad.\n4. Los descuentos de ISSS y AFP suman el 10.25%% del salario bruto.\n");

}