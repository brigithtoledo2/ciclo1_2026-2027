# include <stdio.h>

void main() {
    float DESC_10 = 0.05;
    float DESC_50 = 0.10;
    float DESC_100 = 0.15;
    int UMBRAL_10 = 10;
    int UMBRAL_50 = 50;
    int UMBRAL_100 = 100;
    float IVA = 0.15;
    int cantidad_art = 0;
    float precio_uni = 0.0;
    float subtotal, descuento, porcentaje_desc, base_imponible, monto_iva, total, mitad = 0.0;

    printf("Bienvenido a la Clinica Veterinaria\n");
    printf("Ingrese la cantidad de articulos: ");
    scanf("%d", &cantidad_art);
    printf("Ingrese el precio unitario: ");
    scanf("%f", &precio_uni);

    subtotal = cantidad_art * precio_uni;

    if (cantidad_art >= UMBRAL_100) {
        porcentaje_desc = DESC_100;
    
    } else if (cantidad_art >= UMBRAL_50) {
        porcentaje_desc = DESC_50;

    } else if (cantidad_art >= UMBRAL_10) {
        porcentaje_desc = DESC_10;

    } else {
        porcentaje_desc = 0.0;
    }
    
    descuento = subtotal * porcentaje_desc;
    base_imponible = subtotal - descuento;
    monto_iva = base_imponible * IVA;
    total = base_imponible + monto_iva;
    mitad = total / 2;

    printf("Factura - Clinica Veterinaria \n");
    printf("Cantidad de articulos : %d \n", cantidad_art);
    printf("Precio unitario: $ %.2f \n", precio_uni);

    printf("El subtotal es: $ %.2f \n", subtotal);
    printf("El descuento es: $ %.2f \n", descuento);
    printf("El IVA es: $ %.2f \n", monto_iva);
    printf("El total es: $ %.2f\n", total);
    printf("La mitad del total es: $ %.2f \n", mitad);
}

