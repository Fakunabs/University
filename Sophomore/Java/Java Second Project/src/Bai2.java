import java.util.Scanner;

public class Bai2 {
    public static void main(String[] args) {
        System.out.println("Giải phương trình bậc nhất ax + b = 0");
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập a:");
        int a = sc.nextInt();
        System.out.println("Nhập b:");
        int b = sc.nextInt();
        if (a == 0) {
            if (b == 0) {
                System.out.println("Phương trình vô số nghiệm");
            } else {
                System.out.println("Phương trình vô nghiệm");
            }
        } else {
            System.out.println("Phương trình có nghiệm x = " + (float) -b / a);
        }
    }
}
