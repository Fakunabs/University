console.log("Hello World");

// Biến - Variable

// camel Case -> xuanthinh = xuanThinh

// Declare variable: Khai báo biến 

// const and let 

const number = 100;

console.log(number);

// number = 200

let otherNumber = 200;

import java.util.Scanner;

public class ViDu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Nhap vao ho va ten: ");
        String hoVaTen = sc.nextLine();

        System.out.println("Nhap ma sinh vien: ");
        long maSinhvien = sc.nextLong();

        System.out.println("Nhap vao diem thi: ");
        float diemThi= sc.nextFloat();

        System.out.println("------");
        System.out.println("Ho va ten: " + hoVaTen);
        System.out.println("Ma sinh vien: " + maSinhvien);
        System.out.println("Diem Thi: " + diemThi );
    }
}