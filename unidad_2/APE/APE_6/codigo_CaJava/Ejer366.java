
import java.util.Scanner;

public class Ejer366 {
    public static void main(String[] args) {
        float BONO_CARGA = 50.0f;
        float BONO_ANTIGUEDAD = 30.0f;
        float DESCUENTO_ISSS = 0.03f;
        float DESCUENTO_AFP = 0.0725f;
        int LIMITE_ANTIGUEDAD = 10;
        float salario_bruto = 0.0f;
        int cargas, antiguedad, anios_validos = 0;
        float bonos, descuentos, salario_neto, mitad = 0.0f;
        Scanner sc = new Scanner(System.in);
    
        System.out.println("Ingrese el salario bruto: ");
        salario_bruto = sc.nextFloat();
        System.out.println("Ingrese el numero de cargas familiares: ");
        cargas = sc.nextInt();
        System.out.println("Ingrese los anios de antiguedad: ");
        antiguedad = sc.nextInt();

        if (antiguedad < LIMITE_ANTIGUEDAD) {
            anios_validos = antiguedad;
        } else {
            anios_validos = LIMITE_ANTIGUEDAD;
        }

        bonos = cargas * BONO_CARGA + anios_validos * BONO_ANTIGUEDAD;
        descuentos = salario_bruto * (DESCUENTO_ISSS + DESCUENTO_AFP);
        salario_neto = salario_bruto + bonos - descuentos;
        mitad = salario_neto / 2;

        System.out.println("El salario bruto es: $ " + salario_bruto);
        System.out.println("El salario neto es: $ " + salario_neto);
        System.out.println("El total de bonos es: $ " + bonos);
        System.out.println("El total de descuentos es: $ " + descuentos);
        System.out.println("La mitad del salario neto es: $ " + mitad);
        System.out.println("Conclusiones: ");

        if (salario_neto > salario_bruto) {
            System.out.println("1. Neto > Bruto: Verdadero ");
            System.out.println("2. Los bonos superan a los descuentos, por eso el neto es mayor que el bruto. ");
        } else {
            System.out.println("1. Neto > Bruto: Falso ");
            System.out.println("2. Los descuentos superan a los bonos, por eso el neto es menor o igual que el bruto. ");
        }

        System.out.println("3. Solo se pagan bonos por un maximo de 10 anios de antiguedad.\n4. Los descuentos de ISSS y AFP suman el 10.25%% del salario bruto. ");
        sc.close();
    }
}