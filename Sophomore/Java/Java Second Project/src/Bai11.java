import java.util.Scanner;
public class Bai11 {
    public static void main(String[] args) {
        //Viếtchươngtrìnhtính:
        //n!! =1*3*5*.....*n (n lẽ)
        //    =2*4*6*....*n (n chẵn)
        //Nhậpvàosốn:
        System.out.println("Viết chương trình tính: n!! =1*3*5*.....*n (n lẽ) hoặc n!! =2*4*6*....*n (n chẵn)");
        System.out.println("Nhập vào số n: ");
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int n1 = 1;
        int n2 = 2;
        int n3 = 1;
        if (n % 2 == 0) {
            for (int i = 1; i <= n / 2; i++) {
                n1 *= n2;
                n2 += 2;
            }
            System.out.println("n!! = " + n1);
        } else {
            for (int i = 1; i <= (n + 1) / 2; i++) {
                n3 *= n2;
                n2 += 2;
            }
            System.out.println("n!! = " + n3);
        }
    }
}
