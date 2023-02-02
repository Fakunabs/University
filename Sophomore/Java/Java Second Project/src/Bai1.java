import java.util.Scanner;

public class Bai1 {
    public static void main(String[] args) {
        System.out.println("Nhập a: ");
        Scanner scanner = new Scanner(System.in);
        double a = scanner.nextDouble();
        System.out.println("Nhập b: ");
        double b = scanner.nextDouble();
        System.out.println("Nhập c: ");
        double c = scanner.nextDouble();
        System.out.println("Phương trình bậc 2 sẽ có dạng ");
        double delta = b * b - 4 * a * c;
        if (a == 0) {
            if (b == 0) {
                System.out.println("Phương trình vô nghiệm");
            } else {
                System.out.println("Phương trình có một nghiệm: " + (-c / b));
            }
            return;
        }
        if (delta < 0) {
            System.out.println("Phương trình vô nghiệm");
        } else if (delta == 0) {
            System.out.println("Phương trình có nghiệm kép: " + (-b / (2 * a)));
        } else {
            System.out.println("Phương trình có 2 nghiệm phân biệt: " + ((-b + Math.sqrt(delta)) / (2 * a)) + " và " + ((-b - Math.sqrt(delta)) / (2 * a)));
        }

    }
}