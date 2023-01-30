/*
    Viết chương trình C hoàn chỉnh thực hiện nhiều lần việc tạo bảng thực đơn rồi lựa chọn để thực hiện công việc sau:

    1. Nhập mới danh sách đặc có 123 xã phường có ở Đà Nẵng gồm: tên xã phường, thuộc quận huyện, số dân    
    2. Nhập tên 1 quận huyện, in ra danh sách các xã phường thuộc quận huyện đó
    3. Tính tổng số hộ dân có ở Đà Nẵng
    4. Tính số hộ dân bình quân của 1 xã phường ở Đà Nẵng

*/

#include <bits/stdc++.h>

using namespace std;

struct XaPhuong
{
    char ten[30];
    char quanHuyen[30];
    int soDan;
};

void nhapXaPhuong(XaPhuong &xaPhuong)
{
    cout << "Nhap ten xa phuong: ";
    fflush(stdin);
    gets(xaPhuong.ten);
    cout << "Nhap quan huyen: ";
    fflush(stdin);
    gets(xaPhuong.quanHuyen);
    cout << "Nhap so dan: ";
    cin >> xaPhuong.soDan;
}

void xuatXaPhuong(XaPhuong xaPhuong)
{
    cout << "Ten xa phuong: " << xaPhuong.ten << endl;
    cout << "Quan huyen: " << xaPhuong.quanHuyen << endl;
    cout << "So dan: " << xaPhuong.soDan << endl;
}

void nhapDanhSachXaPhuong(XaPhuong danhSachXaPhuong[], int &soLuongXaPhuong)
{
    cout << "Nhap so luong xa phuong: ";
    cin >> soLuongXaPhuong;
    for (int i = 0; i < soLuongXaPhuong; i++)
    {
        cout << "Nhap thong tin xa phuong thu " << i + 1 << endl;
        nhapXaPhuong(danhSachXaPhuong[i]);
    }
}

void xuatDanhSachXaPhuong(XaPhuong danhSachXaPhuong[], int soLuongXaPhuong)
{
    for (int i = 0; i < soLuongXaPhuong; i++)
    {
        cout << "Thong tin xa phuong thu " << i + 1 << endl;
        xuatXaPhuong(danhSachXaPhuong[i]);
    }

}

void timXaPhuongTheoQuanHuyen(XaPhuong danhSachXaPhuong[], int soLuongXaPhuong)
{
    char quanHuyen[30];
    cout << "Nhap quan huyen: ";
    fflush(stdin);
    gets(quanHuyen);
    for (int i = 0; i < soLuongXaPhuong; i++)
    {
        if (strcmp(danhSachXaPhuong[i].quanHuyen, quanHuyen) == 0)
        {
            xuatXaPhuong(danhSachXaPhuong[i]);
        }
    }
}

int tinhTongSoHoDan(XaPhuong danhSachXaPhuong[], int soLuongXaPhuong)
{
    int tongSoHoDan = 0;
    for (int i = 0; i < soLuongXaPhuong; i++)
    {
        tongSoHoDan += danhSachXaPhuong[i].soDan;
    }
    return tongSoHoDan;
}

float tinhSoHoDanBinhQuan(XaPhuong danhSachXaPhuong[], int soLuongXaPhuong)
{
    return (float)tinhTongSoHoDan(danhSachXaPhuong, soLuongXaPhuong) / soLuongXaPhuong;
}

int main()
{
    XaPhuong danhSachXaPhuong[123];
    int soLuongXaPhuong;
    nhapDanhSachXaPhuong(danhSachXaPhuong, soLuongXaPhuong);
    xuatDanhSachXaPhuong(danhSachXaPhuong, soLuongXaPhuong);
    timXaPhuongTheoQuanHuyen(danhSachXaPhuong, soLuongXaPhuong);
    cout << "Tong so ho dân: " << tinhTongSoHoDan(danhSachXaPhuong, soLuongXaPhuong);
    cout << "So ho dan binh quan: " << tinhSoHoDanBinhQuan(danhSachXaPhuong, soLuongXaPhuong);
    return 0;
}
