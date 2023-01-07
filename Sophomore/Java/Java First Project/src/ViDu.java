import java.util.Scanner;

public class ViDu {
    public static void main(String[] args) {
//        double a, b;
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Nhap vao so a: ");
//        a = sc.nextDouble();
//        System.out.println("Nhap vao so b: ");
//        b = sc.nextDouble();
//
//
//        // Ham tri tuyet doi
//        System.out.println("|a| = " + Math.abs(a));
//
//        // Ham tim min
//        System.out.println("min(a,b ) = " + Math.min(a, b));
//
//        // Ham tim max
//        System.out.println("max(a,b) = " + Math.max(a, b));
//
//        // Ham tim ceil
//        System.out.println("ceil(a,b) = " + Math.ceil(a));
//
//        // Ham tim floor
//        System.out.println("floor(a,b) = " + Math.floor(a));
//
//        // Ham tim sqrt
//        System.out.println("sqrt(a) = " + Math.sqrt(a));
//
//        // Ham tim a^b
//        System.out.println("pow(a,b) = " + Math.pow(a,b));
//
//        double r, dienTich, chuVi;
//        System.out.println("Nhap ban kinh r: ");
//        r = sc.nextDouble();
//
//        // Tinh chu vi
//        chuVi =2*Math.PI*r;
//        System.out.println("Chu vi = " + chuVi);
//
//        dienTich = Math.PI * r * r;
//        System.out.println("Dien tich = " + dienTich);
//
//        int n;
//        System.out.println("Nhap so nguyen n: ");
//        n = sc.nextInt();
//
//        //Kiem tra tinh chan le
//        if (n%2 == 0){
//            System.out.println(n + " la so chan");
//        }
//        else {
//            System.out.println(n + " la so le");
//        }
//        double a, b , x;
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Nhap vao so a : ");
//        a = sc.nextDouble();
//        System.out.println("Nhap vao so b : ");
//        b = sc.nextDouble();
//        System.out.println("Phuong trinh bac 1 se co dang la: " + a + "x" + "+" + b + "=" + 0);
//
//        if (a == 0) {
//            if (b == 0) {
//                System.out.println("Phuong trinh co vo so nghiem!");
//            }else {
//                System.out.println("Phuong trinh vo nghiem!");
//            }
//        }else {
//            x = -b/a;
//            System.out.println("Nghiem x = " + x);
//        }
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhap so nguyen tu 0 den 8: ");
        n = sc.nextInt();
        switch (n) {
            case 1: {
                System.out.println("So vua chon la so 1");
                break;
            }
            case 2: {
                System.out.println("So vua chon la so 2");
                break;

            }
            case 3: {
                System.out.println("So vua chon la so 3");
                break;

            }
            case 4: {
                System.out.println("So vua chon la so 4");
                break;

            }
            case 5: {
                System.out.println("So vua chon la so 5");
                break;

            }
            case 6: {
                System.out.println("So vua chon la so 6");
                break;

            }
            case 7: {
                System.out.println("So vua chon la so 7");
                break;

            }
            case 8: {
                System.out.println("So vua chon la so 8");
                break;

            }
            default:
                System.out.println("Nhap du lieu sai, xin vui long nhap lai!");
        }
    }
}
