#include "Quanly.h"

bool tang(int left, int right) 
{
    return left > right;
}

bool giam(int left, int right) 
{
    return left < right;
}

Quanly::Quanly() 
{

}
void Quanly::Displaybt() 
{
    lphongbt.printNext();
}
        
void Quanly::Displayvip() 
{
    lphongvip.printNext();
}
        
void Quanly::Addbt() 
{
    PhongBT P;
    do 
    {
        cin >> P;
        if(lphongbt.get(P.getMaPH()) != NULL || lphongvip.get(P.getMaPH()) != NULL) cout << "Ma so phong da ton tai !!!" << endl;
    } while (lphongbt.get(P.getMaPH()) != NULL || lphongvip.get(P.getMaPH()) != NULL);
    P.setDongia();
    lphongbt.addTail(P);
}

void Quanly::Addvip() 
{
    PhongVIP P;
    do 
    {
        cin >> P;
        if(lphongbt.get(P.getMaPH()) != NULL || lphongvip.get(P.getMaPH()) != NULL) cout << "Ma so phong da ton tai !!!" << endl;
    } while (lphongbt.get(P.getMaPH()) != NULL || lphongvip.get(P.getMaPH()) != NULL);
    P.setDongia();
    P.setPhuthu();
    lphongvip.addTail(P);
}

void Quanly::Delbt() 
{
    string MaPH;
    cout << "Nhap ma phong binh thuong can xoa: ";
    cin >> MaPH;
    lphongbt.del(MaPH);
}

void Quanly::Delvip() 
{
    string MaPH;
    cout << "Nhap ma phong VIP can xoa: ";
    cin >> MaPH;
    lphongvip.del(MaPH);
}

void Quanly::sapxepbt() 
{
    int option;
    while(true) 
    {
        system("cls");
        cout << "==========SAP XEP MA PHONG==========" << endl;
        cout << "1.Tang dan." << endl;
        cout << "2.Giam dan." << endl;
        cout << "0.Thoat." << endl;
        cout << "====================================" << endl;
        cout << "Nhap lua chon : "; cin >> option;
        switch(option) 
        {
            case 1:
                lphongbt.ShellSort(tang);
                lphongbt.printNext();
                break;
            case 2:
                lphongbt.ShellSort(giam);
                lphongbt.printNext();
                break;
            case 0:
            {
                cout << "Thoat chuc nang." << endl;
                return;
            }    
            default:
                cout << "Khong co chuc nang nay!!!" << endl;
                break;
        }
        system("pause");
    }
}

void Quanly::timkiembt() 
{
    int option;
    while(true) 
    {
        system("cls");
        cout << "==========TIM KIEM MA PHONG==========" << endl;
        cout << "1.Tiem kiem." << endl;
        cout << "0.Thoat." << endl;
        cout << "=====================================" << endl;
        cout << "Nhap lua chon : "; cin >> option;
        switch(option) 
        {
            case 1:
            {
                string x;
                cout << "Nhap ma phong can tim : "; cin >> x;
                lphongbt.ShellSort(tang);
                int K = lphongbt.InterpolationSearch(x);
                if(K == -1) cout << "Khong co ma phong nay !!!" << endl;
                break;
            }
            case 0:
                cout << "Thoat chuc nang." << endl;
                return;   
            default:
                cout << "Khong co chuc nang nay!!!" << endl;
                break;
        }
        system("pause");
    }
}

void Quanly::sapxepvip() 
{
    int option;
    while(true) 
    {
        system("cls");
        cout << "==========SAP XEP MA PHONG==========" << endl;
        cout << "1.Tang dan." << endl;
        cout << "2.Giam dan." << endl;
        cout << "0.Thoat." << endl;
        cout << "====================================" << endl;
        cout << "Nhap lua chon : "; cin >> option;
        switch(option) 
        {
            case 1:
                lphongvip.ShellSort(tang);
                lphongvip.printNext();
                break;
            case 2:
                lphongvip.ShellSort(giam);
                lphongvip.printNext();
                break;
            case 0:
            {
                cout << "Thoat chuc nang." << endl;
                return;
            }    
            default:
                cout << "Khong co chuc nang nay!!!" << endl;
                break;
        }
        system("pause");
    }
}

void Quanly::timkiemvip() 
{
    int option;
    while(true) 
    {
        system("cls");
        cout << "==========TIM KIEM MA PHONG==========" << endl;
        cout << "1.Tiem kiem." << endl;
        cout << "0.Thoat." << endl;
        cout << "=====================================" << endl;
        cout << "Nhap lua chon : "; cin >> option;
        switch(option) 
        {
            case 1:
            {
                string x;
                cout << "Nhap ma phong can tim : "; cin >> x;
                lphongvip.ShellSort(tang);
                int K = lphongvip.InterpolationSearch(x);
                if(K == -1) cout << "Khong co ma phong nay !!!" << endl;
                break;
            }
            case 0:
                cout << "Thoat chuc nang." << endl;
                return;   
            default:
                cout << "Khong co chuc nang nay!!!" << endl;
                break;
        }
        system("pause");
    }
}

void Quanly::capnhatbt() 
{
    string Ma;
    cout << "Nhap ma so phong can cap nhat: "; cin >> Ma;
    if(lphongbt.get(Ma) != NULL) 
    {
        node<PhongBT>* P = lphongbt.get(Ma);
        PhongBT U = P->getData();
        while(true) 
        {
            system("cls");
            int option;
            string MaPH;
            int SoNguoi;
            bool TinhTrang;
            Date NgayNhan;
            Date NgayTra;
            P->print(P);
            cout << "\n";
            cout << "==========CAP NHAT THONG TIN==========" << endl;
            cout << "1.Cap nhat ma phong." << endl;
            cout << "2.Cap nhat so nguoi." << endl;
            cout << "3.Cap nhat tinh trang." << endl;
            cout << "4.Cap nhat ngay nhan." << endl;
            cout << "5.Cap nhat ngay tra." << endl;
            cout << "0.Thoat."<< endl;
            cout << "======================================" << endl;
            cout << "Nhap lua chon: "; cin >> option;
            switch(option) 
            {
                case 1:
                    do 
                    {
                        cout << "Nhap ma phong moi : "; cin >> MaPH;
                        if(lphongbt.get(MaPH) != NULL || lphongvip.get(MaPH) != NULL) cout << "Ma so phong da ton tai !!!" << endl;
                        if(stoi(MaPH) < 10000 || stoi(MaPH) > 59999 ) 
                        {
                            cout << "Loi du lieu !!!" << endl;
                        }
                    } while (lphongbt.get(MaPH) != NULL || lphongvip.get(MaPH) != NULL || stoi(MaPH) < 10000 || stoi(MaPH) > 59999);
                    U.SetMaPH(MaPH);
                    break;
                case 2:
                    cout << "Nhap so nguoi moi : "; cin >> SoNguoi;
                    U.SetSoNguoi(SoNguoi);
                    break;
                case 3:
                    cout << "Nhap tinh trang moi : "; cin >> TinhTrang;
                    U.SetTinhTrang(TinhTrang);
                    if(TinhTrang == true) 
                    {
                        Date NgayNhan(1,1,0);
                        Date NgayTra(1,1,0);
                        U.SetNgayNhan(NgayNhan);
                        U.SetNgayTra(NgayTra);
                    }
                    break;
                case 4:
                    cout << "Nhap ngay nhan moi : "; cin >> NgayNhan;
                    U.SetNgayNhan(NgayNhan);
                    break;
                case 5:
                    cout << "Nhap ngay tra moi : "; cin >> NgayTra;
                    U.SetNgayTra(NgayTra);
                    break;
                case 0:
                    P->setData(U);
                    cout << "Thoat chuc nang." << endl;
                    return;
                default:
                    cout << "Khong co chuc nang nay !!!" << endl;
                    break;
            }
            system("pause");
            }
    }
    else cout << "Ma phong khong ton tai !!!" << endl;
}

void Quanly::capnhatvip() 
{
    string Ma;
    cout << "Nhap ma so phong can cap nhat: "; cin >> Ma;
    if(lphongvip.get(Ma) != NULL) 
    {
        node<PhongVIP>* P = lphongvip.get(Ma);
        PhongVIP U = P->getData();
        while(true) 
        {
            system("cls");
            int option;
            string MaPH;
            int SoNguoi;
            bool TinhTrang;
            Date NgayNhan;
            Date NgayTra;
            P->print(P);
            cout << "\n";
            cout << "==========CAP NHAT THONG TIN==========" << endl;
            cout << "1.Cap nhat ma phong." << endl;
            cout << "2.Cap nhat so nguoi." << endl;
            cout << "3.Cap nhat tinh trang." << endl;
            cout << "4.Cap nhat ngay nhan." << endl;
            cout << "5.Cap nhat ngay tra." << endl;
            cout << "0.Thoat."<< endl;
            cout << "======================================" << endl;
            cout << "Nhap lua chon: "; cin >> option;
            switch(option) 
            {
                case 1:
                    do 
                    {
                        cout << "Nhap ma phong moi : "; cin >> MaPH;
                        if(lphongbt.get(MaPH) != NULL || lphongvip.get(MaPH) != NULL) cout << "Ma so phong da ton tai !!!" << endl;
                        if(stoi(MaPH) < 10000 || stoi(MaPH) > 59999 ) 
                        {
                            cout << "Loi du lieu !!!" << endl;
                        }
                    } while (lphongbt.get(MaPH) != NULL || lphongvip.get(MaPH) != NULL || stoi(MaPH) < 10000 || stoi(MaPH) > 59999);
                    U.SetMaPH(MaPH);
                    break;
                case 2:
                    cout << "Nhap so nguoi moi : "; cin >> SoNguoi;
                    U.SetSoNguoi(SoNguoi);
                    break;
                case 3:
                    cout << "Nhap tinh trang moi : "; cin >> TinhTrang;
                    U.SetTinhTrang(TinhTrang);
                    if(TinhTrang == true) 
                    {
                        Date NgayNhan(1,1,0);
                        Date NgayTra(1,1,0);
                        U.SetNgayNhan(NgayNhan);
                        U.SetNgayTra(NgayTra);
                    }
                    break;
                case 4:
                    cout << "Nhap ngay nhan moi : "; cin >> NgayNhan;
                    U.SetNgayNhan(NgayNhan);
                    break;
                case 5:
                    cout << "Nhap ngay tra moi : "; cin >> NgayTra;
                    U.SetNgayTra(NgayTra);
                    break;
                case 0:
                    P->setData(U);
                    cout << "Thoat chuc nang." << endl;
                    return;
                default:
                    cout << "Khong co chuc nang nay !!!" << endl;
                    break;
            }
            system("pause");
            }
    }
    else cout << "Ma phong khong ton tai !!!" << endl;
}

void Quanly::menuBT() 
{
    int option;
    while(true) 
    {
        system("cls");
        cout << "==========QUAN LI PHONG BINH THUONG==========" << endl;
        cout << "1.Danh sach phong khach san." << endl;
        cout << "2.Them phong." << endl;
        cout << "3.Xoa phong." << endl;
        cout << "4.Tim kiem phong." << endl;
        cout << "5.Sap xep phong." << endl;
        cout << "6.Cap nhat phong." << endl;
        cout << "0.Thoat." << endl;
        cout << "===========================================" << endl;
        cout << "Nhap lua chon : "; cin >> option;
        switch(option) 
        {
            case 1:
                Displaybt();
                break;
            case 2:
                Addbt();
                break;;
            case 3:
                Delbt();
                break;
            case 4:
                sapxepbt();
                break;
            case 5:
                timkiembt();
                break;
            case 6:
                capnhatbt();
                break;
            case 0:
                cout << "Thoat chuc nang." << endl;
                return;
            default:
                cout << "Khong co chuc nang nay!!!" << endl;
                break;
        }
        system("pause");
    }
}

void Quanly::menuVIP() 
{
    int option;
    while(true) 
    {
        system("cls");
        cout << "==========QUAN LI PHONG VIP==========" << endl;
        cout << "1.Danh sach phong khach san." << endl;
        cout << "2.Them phong." << endl;
        cout << "3.Xoa phong." << endl;
        cout << "4.Tim kiem phong." << endl;
        cout << "5.Sap xep phong." << endl;
        cout << "6.Cap nhat phong." << endl;
        cout << "0.Thoat." << endl;
        cout << "===========================================" << endl;
        cout << "Nhap lua chon : "; cin >> option;
        switch(option) 
        {
            case 1:
                Displayvip();
                break;
            case 2:
                Addvip();
                break;;
            case 3:
                Delvip();
                break;
            case 4:
                sapxepvip();
                break;
            case 5:
                timkiemvip();
                break;
            case 6:
                capnhatvip();
                break;
            case 0:
                cout << "Thoat chuc nang." << endl;
                return;
            default:
                cout << "Khong co chuc nang nay!!!" << endl;
                break;
        }
        system("pause");
    }
}