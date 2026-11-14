
import java.util.Scanner;

public class Notafinal {
    public static void main(String[] args) {
        float EVA_IND = 0.30f;
        float TRA_GRUP = 0.30f;
        float EVA_FIN = 0.40f;
        float NOTA_MIN = 7.00f;
        float individual, grupal, evafinal, promedio = 0.0f;
        Scanner sc = new Scanner(System.in);
    
        System.out.println("Ingrese la calificacion de la evaluacion individual: ");
        individual = sc.nextFloat();
        System.out.println("Ingrese la calificacion del trabajo grupal: ");
        grupal = sc.nextFloat();
        System.out.println("Ingrese la calificacion de la evaluacion final: ");
        evafinal = sc.nextFloat();

        if (individual >= 0 && individual <= 10 && grupal >= 0 && grupal <= 10 && evafinal >= 0 && evafinal <= 10) {
        
            promedio = (individual * EVA_IND) + (grupal * TRA_GRUP) + (evafinal * EVA_FIN);
            System.out.println("La nota final de la unidad 1 del estudiante es: " + promedio);

            if (promedio >= 9.00) {
                System.out.println("El estudiante tiene un nivel de desempeño excelente");
            } else if (promedio >= 8.00 && promedio <= 8.99) {
                System.out.println("El estudiante tiene un nivel de desempeño muy bueno");
            } else if (promedio >= 7.00 && promedio <= 7.99) {
                System.out.println("El estudiante tiene un nivel de desempeño bueno");
            } else if (promedio >= 5.00 && promedio <= 6.99) {
                System.out.println("El estudiante tiene un nivel de desempeño regular");
            } else if (promedio >= 0.00 && promedio <= 4.99) {
                System.out.println("El estudiante tiene un nivel de desempeño deficiente");
            }

            if (promedio >= NOTA_MIN) {
                System.out.println("Estado: El estudiante aprueba");
            } else {
                System.out.println("Estado: El estudiante reprueba");
            }

            if (promedio < NOTA_MIN) {
                System.out.println("El estudiante requiere refuerzo academico");
            }

            if (promedio >= 9.00) {
                System.out.println("¡Felicitaciones! Rendimiento sobresaliente");
            }
        } else {
            System.out.println("Error: Las calificaciones deben estar entre 0 y 10");
        } 
        sc.close();
    }
}





