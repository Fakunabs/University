import java.util.Scanner;

import java.util.Scanner;

public class Bai9 {
    public static void main(String[] args) {
        System.out.println("Viết chương trình tính S=1+1/3!+1/5!+.....+1/(2n-1)!");
        System.out.println("Nhập vào số n: ");
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        float s = 0;
        for (int i = 1; i <= n; i++) {
            s += 1.0 / tinhGiaiThua(2 * i - 1);

        }
        System.out.println("S = " + s);


    }
    public static int tinhGiaiThua(int n) {
        if (n == 1) {
            return 1;
        }
        return n * tinhGiaiThua(n - 1);
    }
}
