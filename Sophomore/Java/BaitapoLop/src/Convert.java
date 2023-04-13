
import java.util.Scanner;
public class Convert {
    // Viết chương trình chuyển nhập số n vào từ bàn phím, chuyển n sang hệ cơ số 2 bằng tính toán
    // và in ra màn hình

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap so n: ");
        int n = sc.nextInt();
        String s = "";
        while (n > 0) {
            s = n % 2 + s;
            n /= 2;
        }
        System.out.println("So n sau khi chuyen sang he co so 2 la: " + s);
    }




}
