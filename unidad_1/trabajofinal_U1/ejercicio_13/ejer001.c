#include <stdio.h>

void main() {
    float DIVISOR = 3.0;
    int x, u, val2;
    int suma, producto;
    float promedio;

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &x);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &u);
    printf("Ingrese el tercer numero entero: ");
    scanf("%d", &val2);

    suma = x + u + val2;
    producto = x * u * val2;
    
    /*El promedio debe ser real (float) porque al dividir los numeros enteros pueden dar decimales. 
    La suma y producto son enteros (int) porque sumar o multiplicar enteros siempre da otro entero.*/    
    promedio = suma / 3.0;

    printf("El resultado de la suma es: %d\n", suma);
    printf("El resultado del producto es: %d\n", producto);
    printf("El resultado del promedio es: %.2f\n", promedio);

    if (suma > 0) {
        printf("La suma es positiva.\n");

    } else {
        printf("La suma es negativa.\n");
    }
    printf("Las operaciones realizadas son: suma, producto y promedio de tres enteros.\n");

}
