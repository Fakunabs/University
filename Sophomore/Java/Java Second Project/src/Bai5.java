import java.util.Scanner;
public class Bai5 {
    public static void main(String[] args) {
        System.out.println("Tìm số trung gian của 3 số a,b,c (a=1, b=2, c=3 => stg=2)");
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập a:");
        int a = sc.nextInt();
        System.out.println("Nhập b:");
        int b = sc.nextInt();
        System.out.println("Nhập c:");
        int c = sc.nextInt();
        int stg = a;
        if (stg < b && stg > c || stg > b && stg < c) {
            stg = b;
        }
        if (stg < c && stg > a || stg > c && stg < a) {
            stg = c;
        }
        System.out.println("Số trung gian là: " + stg);

    }
}
