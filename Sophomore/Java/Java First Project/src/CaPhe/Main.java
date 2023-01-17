package CaPhe;

public class Main {
    public static void main(String[] args) {
        HoaDonCaPhe hd = new HoaDonCaPhe("Trung Nguyen", 100 , 9);
        System.out.println("Tong tien: " + hd.TnhTongTien());
        System.out.println("Khoi luong lon hon 2kg: " + hd.kiemTraKhoiLuongLonHon(2));
        System.out.println("Tong tien lon hon 500k: " + hd.kiemTraTongTienLonHon500K());
    }
}
