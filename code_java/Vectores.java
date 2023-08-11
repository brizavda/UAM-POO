import java.util.Scanner;

public class Vectores {
    public static void intercambiar(int n) {
        int[] vector = new int[n];
        Scanner scanner = new Scanner(System.in);

        System.out.println();
        for (int i = 0; i < n; i++) {
            System.out.print("Escriba el valor " + (i + 1) + " : ");
            vector[i] = scanner.nextInt();
        }

        System.out.println("\nArreglo original");
        for (int j = 0; j < n; j++) {
            System.out.print(vector[j] + " ");
        }

        System.out.println("\nArreglo resultante");
        for (int j = n - 1; j >= 0; j--) {
            System.out.print(vector[j] + " ");
        }
    }

    public static boolean primo(int p) {
        int flag = 0;

        for (int i = 1; i <= p; i++) {
            if (p % i == 0) {
                flag += 1;
            }
        }

        return flag == 2;
    }
}
