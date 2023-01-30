import java.util.Scanner;

public class Bai6 {
    public static void main(String[] args) {
        System.out.println("ViếtchươngtrìnhtínhtiềnchobàitoánKaraOke");
        System.out.println("+ Giờ bắt đầu : a (int)");
        System.out.println("+ Giờ kết thúc : b (int)");
        System.out.println("+ Nếu b<18h : 45000đ/1h, nếu b>=18h : 60000đ/1h");

        Scanner scanner = new Scanner(System.in);
        System.out.print("Nhập giờ bắt đầu: ");
        int a = scanner.nextInt();
        System.out.print("Nhập giờ kết thúc: ");
        int b = scanner.nextInt();

        int c = b - a;

        int d = 0;System.out.println("Số giờ bạn đã sử dụng là: " + c + " tiếng đồng hồ");

        if (b < 18) {
            System.out.println("Bạn không chơi quá 18h, bạn phải trả là " + c + "*" + "45000đ " + "= " + (b - a) * 45000 + "đ");
        } else {
            System.out.println("Bạn chơi quá 18h, bạn phải trả là " + c + "*" + "60000đ " + "= " + (b - a) * 60000 + "đ");
        }
        System.out.println("Số tiền phải trả là: " + d);
    }
}
