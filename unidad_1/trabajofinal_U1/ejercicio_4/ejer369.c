#include <stdio.h>

int main (void) {

    /*Primero se coloca las variables*/
    float lado1, lado2, lado3 = 0;
    int teorema = 0;
    int equilatero, isoseles, escaleno = 0;
    float perimetro, mitad = 0.0;
    char *tipo;

    /*Se piden los datos para ser leidos*/
    printf("Ingrese el primer lado:");
    scanf("%f", &lado1);
    printf("Ingrese el segundo lado:");
    scanf("%f", &lado2);
    printf("Ingrese el tercer lado:");
    scanf("%f", &lado3);

    /*Expresion logica del teorema de la desigualdad triangular*/
    teorema = (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1);

    /*Condiciones para determinar si el triangulo es equilatero o isoseles*/
    if (teorema) {
        equilatero = (lado1 == lado2 && lado2 == lado3);
        isoseles = (lado1 == lado2 || lado1 == lado3 || lado2 == lado3);

    /*Se pregunta primero por el equilatero porque tambien cumple el isosceles.
    Tambien se le asigna el tipo a cada uno de los tipos de triangulos*/
        if (equilatero) {
            tipo = "equilatero";
        } else {
            if (isoseles) {
                tipo = "isoseles";
            } else {
                tipo = "escaleno";
            }
        }
    /*Se calcula el perimetro para luego sacar la mitad de este*/
        perimetro = lado1 + lado2 + lado3;
        mitad = perimetro / 2;

    /*Los lados que no cumplen la expresion logica se les asigna este tipo*/
    } else {
        tipo = "no es un triangulo valido";
    }
    /*Se presenta el tipo de triangulo que se le asigno*/
    printf("El tipo de triangulo es: %s \n", tipo);

    /*Si cumple con la condicion de le saca la mitad del resultado, sino se termina el algoritmo*/
    if (teorema) {
        printf("La mitad del triangulo es: %.2f \n", mitad);
    }

}
