import java.util.Scanner;
public class Bai8 {
    public static void main(String[] args) {
//        System.out.println("Viết chương trình tính S=1+1/2+1/3+....+1/n");
//        System.out.println("Nhập vào số n: ");
//        Scanner scanner = new Scanner(System.in);
//        int n = scanner.nextInt();
//        float s = 0;
//        for (int i = 1; i <= n; i++) {
//            s += 1.0 / i;
//        }
//        System.out.println("S = " + s);
        System.out.println("Viết chương trình tính S=1+1/2+1/3+....+1/n sử dụng đệ qui");
        System.out.println("Nhập vào số n: ");
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        System.out.println("S = " + tinhS(n));
    }
    public static float tinhS(int n) {
        if (n == 1) {
            return 1;
        }

        return (float) 1.0 / n + tinhS(n - 1);
    }
}
