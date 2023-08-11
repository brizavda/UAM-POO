public class Primo {
    public static boolean verificar(int p) {
        int flag = 0;

        for (int i = 1; i <= p; i++) {
            if (p % i == 0) {
                flag += 1;
            }
        }

        return flag == 2;
    }
}
