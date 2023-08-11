import java.util.Scanner;

public class Calculadora {
    public static int realizarOperacion(int a, int b) {
        Scanner scanner = new Scanner(System.in);
        int opc;
        int resultado;

        System.out.println("\n¿Qué deseas calcular?");
        System.out.println("\t1. Suma\n\t2. Resta\n\t3. Multiplicación\n\t4. División");
        opc = scanner.nextInt();

        switch (opc) {
            case 1:
                resultado = a + b;
                break;
            case 2:
                resultado = a - b;
                break;
            case 3:
                resultado = a * b;
                break;
            case 4:
                resultado = a / b;
                break;
            default:
                System.out.println("Opción incorrecta. Intenta de nuevo");
                resultado = 0;
                break;
        }

        return resultado;
    }
}
