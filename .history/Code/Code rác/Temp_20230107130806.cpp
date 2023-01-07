// Sản phẩm : class Product
// Đồ ăn, thức uống
// Tên sản phẩm
// Mã sản phẩm
// Giá tiền của 1 sản phẩm
// Số lượng có thể bán : nếu < 0 thì báo hết món (Day 1 luôn luôn có món nếu muốn code hay hơn thì sẽ có 1 món bất kì hết hàng)

// class Person
// Thông tin chủ : Tên, số điện thoại, Số cmnd, email liên hệ, ngày sinh.
// Thông tin nhân viên :Tên, số điện thoại, Số cmnd, email liên hệ, ngày sinh, he so luong,

// int ra Budget
// Ngân sách
// Day 1 bán được bao nhiêu đó ghi vào tiền tổng ( lịch sử mua bán là bao gồm hóa đơn)
// Day 2 ...

// Day n (Tổng tiền của n ngày : 2000000vnd)

// kế thừa từ lớp person
// Mã thành viên
// 1 : tích điểm -- tích tới 1 mức điểm nhất định ví dụ 50đ
// 2 : giảm giá (chiết khấu theo %) :
// Khai báo ra thành viên : kế thừa từ lớp person : Tên, điện thoại, ngày sinh, mã voucher
// Điểm tích lũy (theo % của hóa đơn) :

// class voucher
// voucher (nếu mà đơn hàng vượt 1 mức nhất định như 50k hoặ 100k thì sẽ áp dụng được mã tương ứng)
// vc 1 : áp dụng cho >= 50k
// vc 2: áp dụng cho >= 100k
// Tài khoản và mật khẩu của thành viên
// Tk là auto sdt
// Mk là do khách nhập

// Class Bill
// Mã nhân viên
// Thông tin của món ăn
// Mã sản phẩm
// Số lượng
// Bao nhiêu đó (5 món của 1 mã sản phẩm nào đó)
// Đơn giá
// Tính ra tiền của 1 món
// Thành tiền
// 1 * 5
// Tổng cộng tiền

// Quý khách có muốn mở thẻ thành viên không : yes or no
// Chiết khấu
// tích điểm và giảm giá hoặc voucher (giảm giá được tiền cụ)
// Phương thức
// Tiền mặt
// Tiền khách đưa 100k đơn 65 thì return tiền
// Tiền khách đưa bé hơn đơn thì cout không đủ tiền mua hàng vui lòng đưa thêm hoặc (do while)

// product.txt
// Tên           Mã sp            Số lượng hiện có           Đon giá          ...
//  abc            x                     y                    ...vnd

// Thông tin chủ và nhân viên
// Chủ :
// Nhân viên mỗi ngày day 1 day 2 làm được bao nhiêu h đó
// giờ làm sẽ được ghi vào file txt
// infor.txt
// mã hóa đơn     mã sp       mã thành viên

// voucher.txt
// ABC123 : 50k
// XYZ456 : 100k

// Day 1 : tên nhân viên làm việc (nv A)    Giờ làm : 5 tiếng     lương là 20k/h    Tổng lương : 100k
// Day 1 : tên nhân viên làm việc (nv A)    Giờ làm : 8 tiếng

// #include <iostream>

// using namespace std;

// bool isIncreasingChainNumber(int number) {
//     int prev = 0;
//     int curr = 0;
//     while (number > 0) {
//         prev = curr;
//         curr = number % 10;
//         if (prev >= curr) {
//             return false;
//         }
//         number /= 10;
//     }
//     return true;
// }

// int main() {
//     int number1 = 123456789;
//     int number2 = 123432112321;
//     int number3 = 988811111;

//     cout << isIncreasingChainNumber(number1) << endl; // true
//     cout << isIncreasingChainNumber(number2) << endl; // true
//     cout << isIncreasingChainNumber(number3) << endl; // false
// }

// // Write a program to convert normal text from lowercase to uppercase and vice versa.
// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//             str[i] = str[i] - 32;
//         else if (str[i] >= 'A' && str[i] <= 'Z')
//             str[i] = str[i] + 32;
//     }
//     cout << "String after case conversion: " << str;
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[50], n;
    do {
        printf("\n Nhap so luong phan tu: ");
        scanf("%d", &n);
        if (n <= 0)
            printf(" Nhap n duong!");
    } while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        printf(" Phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
    int max = 0;
    int dem = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            dem++;
            if (dem > max)
            {
                max = dem;
            }
        }
        else
        {

            dem = 1;
        }
    }
    printf("\nSo lan nhat hien nhieu nhat la: %d", max);
    // getch();
    return 0;
}
