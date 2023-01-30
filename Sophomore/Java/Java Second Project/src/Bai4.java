import java.util.Scanner;

public class Bai4 {
    public static void main(String[] args) {
        System.out.println("Giải hệ phương trình bậc nhất 2 ẩn");
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập a1:");
        int a1 = sc.nextInt();
        System.out.println("Nhập b1:");
        int b1 = sc.nextInt();
        System.out.println("Nhập c1:");
        int c1 = sc.nextInt();
        System.out.println("Nhập a2:");
        int a2 = sc.nextInt();
        System.out.println("Nhập b2:");
        int b2 = sc.nextInt();
        System.out.println("Nhập c2:");
        int c2 = sc.nextInt();
        if (a1 * b2 - a2 * b1 == 0) {
            if (a1 * c2 - a2 * c1 == 0 && b1 * c2 - b2 * c1 == 0) {
                System.out.println("Phương trình vô số nghiệm");
            } else {
                System.out.println("Phương trình vô nghiệm");
            }
        } else {
            System.out.println("Phương trình có nghiệm:");
            System.out.println("x = " + (float) (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1));
            System.out.println("y = " + (float) (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1));
        }

    }
}
