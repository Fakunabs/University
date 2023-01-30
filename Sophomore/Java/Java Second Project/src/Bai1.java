import java.util.Scanner;

public class Bai1 {
    public static void main(String[] args) {

        System.out.println("Tìm max của 3 biến a,b,c ");
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập a:");
        int a = sc.nextInt();
        System.out.println("Nhập b:");
        int b = sc.nextInt();
        System.out.println("Nhập c:");
        int c = sc.nextInt();
        int max = a;
        if (max < b) {
            max = b;
        }
        if (max < c) {
            max = c;
        }
        System.out.println("Max là: " + max);
    }
}