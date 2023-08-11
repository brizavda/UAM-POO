import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int opc;

        System.out.println("¿Qué deseas ver?");
        System.out.println("\t1. Sumar pares\n\t2. Intercambiar vectores\n\t3. ¿Es primo?");
        System.out.println("\t4. Calculadora\n\t0. Salir");
        opc = scanner.nextInt();

        while (opc != 0) {
            switch (opc) {
                case 1:
                    int first, second;
                    System.out.print("\nIngresa tu primer número: ");
                    first = scanner.nextInt();

                    System.out.print("Ingresa tu segundo número: ");
                    second = scanner.nextInt();

                    int suma = SumaPares.calcularSuma(first, second);
                    System.out.println("\nSuma de pares: " + suma);
                    break;

                case 2:
                    int tam;
                    System.out.print("\nIngresa el tamaño de tu arreglo: ");
                    tam = scanner.nextInt();

                    Vectores.intercambiar(tam);
                    break;

                case 3:
                    int p;
                    System.out.print("\nIngresa un número: ");
                    p = scanner.nextInt();

                    boolean esP = Primo.verificar(p);

                    if (esP) {
                        System.out.println(p + " es un número primo");
                    } else {
                        System.out.println(p + " no es un número primo");
                    }
                    break;

                case 4:
                    int a, b;
                    System.out.print("\nIngresa tu primer número: ");
                    a = scanner.nextInt();

                    System.out.print("Ingresa tu segundo número: ");
                    b = scanner.nextInt();

                    int resultado = Calculadora.realizarOperacion(a, b);

                    System.out.println("\nEl resultado es: " + resultado);
                    break;

                default:
                    System.out.println("Opción incorrecta. Intenta de nuevo");
                    break;
            }

            System.out.println("\n\n¿Qué deseas ver?");
            System.out.println("\t1. Sumar pares\n\t2. Intercambiar vectores\n\t3. ¿Es primo?");
            System.out.println("\t4. Calculadora\n\t0. Salir");
            opc = scanner.nextInt();
        }

        System.out.println("Saliendo...");
    }
}

