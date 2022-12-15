#include "List.h"

bool ascending(double x, double y) {
    return x < y;
}

bool descending(double x, double y) {
    return x > y;
}

istream &operator>>(istream &i, Date &d) {
    cout << "Nhap ngay: ";
    i >> d.ngay;
    cout << "Nhap thang: ";
    i >> d.thang;
    cout << "Nhap nam: ";
    i >> d.nam;
    return i;
}

ostream& operator<<(ostream& o, const Date& d) {
    o << d.ngay << "/" << d.thang << "/" << d.nam;
    return o;
}

istream& operator>>(istream& i, NhanVien& nv) {
    do {
        cout << "Nhap ma nhan vien co do dai gom 8 ki tu: ";
        getline(i, nv.maNV);
    } while(nv.maNV.length() != 8);
    cout << "Nhap ten nhan vien: ";
    getline(i, nv.tenNV);
    cout << "Ngay bat dau lam viec\n";
    operator>>(i, nv.ngayBatDau);
    string gioiTinh;
    i.ignore();
    cout << "Nhap gioi tinh(nam/nu): ";
    getline(i, gioiTinh);
    if(gioiTinh == "nu") nv.gioiTinh = true;
        else nv.gioiTinh = false;
    cout << "Nhap luong: ";
    i >> nv.luong;
    return i;
}

ostream& operator<<(ostream& o, const NhanVien& nv) {
    o << "Ma nhan vien: " << nv.maNV << endl;
    o << "Ten nhan vien: " << nv.tenNV << endl;
    o << "Ngay bat dau lam viec: ";
    operator<<(o, nv.ngayBatDau);
    o << endl;
    o << "Gioi tinh: ";
    if(nv.gioiTinh == true) o << "nu" << endl;
        else o << "nam" << endl;
    o << "Luong: " << (size_t)nv.luong << endl;
    return o;
}

int main() {
    List l;
    while(true) {
        cout << endl;
        cout << "========================MENU=======================\n";
        cout << "1. Hien thi danh sach nhan vien \n";
        cout << "2. Them nhan vien dau danh sach\n";
        cout << "3. Them nhan vien vao cuoi danh sach\n";
        cout << "4. Them nhan vien vao danh sach\n";
        cout << "5. Xoa nhan vien dau danh sach\n";
        cout << "6. Xoa nhan vien cuoi danh sach\n";
        cout << "7. Xoa nhan vien trong danh sach\n";
        cout << "8. Cap nhap thong tin nhan vien\n";
        cout << "9. Sap xep danh sach nhan vien theo luong tang dan\n";
        cout << "10. Sap xep danh sach nhan vien theo luong giam dan\n";
        cout << "11. Tim kiem thong tin nhan vien dua vao luong\n";
        cout << "0. Thoat\n";
        cout << "===================================================\n";
        int lc; 
        cout << "Nhap lua chon: ";
        cin >> lc;
        cout << endl;
        if(lc == 1) {
            l.show();
            system("pause");
        } else if(lc == 2) {
            NhanVien nv;
            cin.ignore();
            cin >> nv;
            l.addNVFirst(nv);
            system("pause");
        } else if(lc == 3) {
            NhanVien nv;
            cin.ignore();
            cin >> nv;
            l.addNVLast(nv);
            system("pause");
        } else if(lc == 4) {
            NhanVien nv;
            cin.ignore();
            cin >> nv;
            int index; 
            do {
                cout << "Nhap vi tri can them: ";
                cin >> index;
            } while(index < 1 || index > l.getSoLuong() + 1);
            l.addNV(nv, index - 1);
            system("pause");
        } else if(lc == 5) {
            l.removeNVFirst();
            system("pause");
        } else if(lc == 6) {
            l.removeNVLast();
            system("pause");
        } else if(lc == 7) {
            int index;
            do {
                cout << "Nhap vi tri can xoa: ";
                cin >> index;
            } while(index < 1 || index > l.getSoLuong());
            l.removeNV(index - 1);
            system("pause");
        } else if(lc == 8) {
            cout << "Nhap ma nhan vien can cap nhap thong tin: ";
            string maNV;
            cin.ignore();
            getline(cin, maNV);
            l.updateNV(maNV);
            system("pause");
        } else if(lc == 9) {
            l.mergeSort_Luong(0, l.getSoLuong() - 1, ascending);
            l.show();
            system("pause");
        } else if(lc == 10) {
            l.mergeSort_Luong(0, l.getSoLuong() - 1, descending);
            l.show();
            system("pause");
        } else if(lc == 11) {
            l.mergeSort_Luong(0, l.getSoLuong() -1, ascending);
            cout << "Nhap luong: ";
            double x;
            cin >> x;
            int index = l.interpolation_search(x);
            if(index != -1) {
                cout << "-----------------------------------\n";
                cout << l[index];
                cout << "-----------------------------------\n";
                system("pause");
            } else cout << "Khong tim thay nhan vien!\n";
            system("pause");
        } else if(lc == 0) break;
    }
    return 0;
}