import java.util.Scanner;

public class Input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap a:");
        int a = sc.nextInt();
        System.out.println("Nhap b:");
        int b = sc.nextInt();
        System.out.println("a + b = " + (a + b));
    }
}
