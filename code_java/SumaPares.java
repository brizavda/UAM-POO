public class SumaPares {
    public static int calcularSuma(int n, int m) {
        int suma = 0;

        while (n <= m) {
            if (n % 2 == 0) {
                suma += n;
                System.out.print(n);
                if (n != m) {
                    System.out.print("+");
                }
                n += 2;
            } else {
                n += 1;
            }
        }

        System.out.print(" = " + suma);
        return suma;
    }
}
