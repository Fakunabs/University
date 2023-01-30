import java.util.Scanner;
public class Bai7 {
    public static void main(String[] args) {
        System.out.println("Nhập vào một tháng, một năm bất kỳ. Sau đó in ra số ngày tương ứng với tháng, năm đó (Ví dụ: tháng=2, năm=2000: songay=29,...)");
        System.out.println("Nhập vào tháng: ");
        Scanner scanner = new Scanner(System.in);
        int thang = scanner.nextInt();
        System.out.println("Nhập vào năm: ");
        int nam = scanner.nextInt();
        int songay = 0;
        switch (thang) {
            case 1:
                songay = 31;
                break;
            case 2:
                if (nam % 4 == 0) {
                    songay = 29;
                } else {
                    songay = 28;
                }
                break;
            case 3:
                songay = 31;
                break;
            case 4:
                songay = 30;
                break;
            case 5:
                songay = 31;
                break;
            case 6:
                songay = 30;
                break;
            case 7:
                songay = 31;
                break;
            case 8:
                songay = 31;
                break;
            case 9:
                songay = 30;
                break;
            case 10:
                songay = 31;
                break;
            case 11:
                songay = 30;
                break;
            case 12:
                songay = 31;
                break;
            default:
                System.out.println("Tháng không hợp lệ");
                break;
        }
        System.out.println("Số ngày trong tháng " + thang + " năm " + nam + " là: " + songay);
    }
}
