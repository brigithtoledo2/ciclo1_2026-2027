import java.util.Scanner;

public class Hola {
    public static void main(String[] args) {
        float a, b, c = 0.0f;
        int option = 0;
        Scanner sc = new Scanner(System.in);
        //leer es scanner
       
        //Menu 
        System.out.println("Bienvenido a la calculadora \n Menu");
        System.out.println("Opcion 1: Suma");
        System.out.println("Opcion 2: Resta");
        System.out.println("Opcion 3: Multiplicacion");
        System.out.println("Opcion 4: Division");
        option = sc.nextInt();

        //Datos
        System.out.println("Ingrese el valor de a:");
        a = sc.nextFloat();
        System.out.println("Ingrese el valor de b:");
        b = sc.nextFloat();

        switch(option){
            case 1: 
            c = a + b;
            System.out.println("La suma de " +a+ " y " +b+ " es: " +c);
                break;
            case 2: 
            c = a - b;
            System.out.println("La resta de " +a+ " y " +b+ " es: " +c);
                break;
            case 3:
            c = a * b;
            System.out.println("La multiplicacion de " +a+ " y " +b+ " es: " +c);
                break;
            case 4: 
            c = a / b;
            System.out.println("La division de " +a+ " y " +b+ " es: " +c);
                break;
            default:
            System.out.println("Opcion no valida");
        }
        sc.close();

    }
/*clase con mayuscula la primera"capitalizado", ojbeto con minuscula todo */

}