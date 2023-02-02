import java.util.Scanner;

public class Bai3 {
    public static void main(String[] args) {
        System.out.println("Giải phương trình bậc 2 ax^2 + bx + c = 0");
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập a:");
        int a = sc.nextInt();
        System.out.println("Nhập b:");
        int b = sc.nextInt();
        System.out.println("Nhập c:");
        int c = sc.nextInt();
        if (a == 1) {
            System.out.println("Phương trình bậc 2 sẽ có dạng x^2 + " + b + "x + " + c + " = 0");
        } else if (a == -1) {
            System.out.println("Phương trình bậc 2 sẽ có dạng -x^2 + " + b + "x + " + c + " = 0");
        }
        if (a == 0) {
            if (b == 0) {
                if (c == 0) {
                    System.out.println("Phương trình vô số nghiệm");
                } else {
                    System.out.println("Phương trình vô nghiệm");
                }
            } else {
                System.out.println("Phương trình có nghiệm x = " + (float) -c / b);
            }
        } else {
            int delta = b * b - 4 * a * c;
            System.out.println("Delta = " + delta);
            if (delta < 0) {
                System.out.println("Phương trình vô nghiệm");
            } else if (delta == 0) {
                System.out.println("Phương trình có nghiệm kép x1 = x2 = " + (float) -b / (2 * a));
            } else {
                System.out.println("Phương trình có 2 nghiệm phân biệt:");
                System.out.println("x1 = " + -b + " + " + "√" + delta + " / " + 2 * a);
                System.out.println("x1 = " + (float) (-b + Math.sqrt(delta)) / (2 * a));
                System.out.println("x2 = " + -b + " - " + "√" + delta + " / " + 2 * a);
                System.out.println("x2 = " + (float) (-b - Math.sqrt(delta)) / (2 * a));
            }
        }
    }
}
