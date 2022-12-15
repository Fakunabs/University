#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef struct HS* hs;
struct hocSinh
{
	string ten;
	float diemVan, diemToan;
};
struct HS
{
	hocSinh s;
	HS* next;
};
hs makeNode()
{
	hocSinh s;
	cout << "Nhap thong tin hoc sinh: \n";
	getchar();
	cout << "Nhap ten hoc sinh: ";
	getline(cin, s.ten);
	cout << "\nNhap diem toan: ";
	cin >> s.diemToan;
	cout << "\nNhap diem van: ";
	cin >> s.diemVan;
	hs tmp = new HS;
	tmp->s = s;
	tmp->next = NULL;
	return tmp;
}

void themHs(hs& a)
{
	hs tmp = makeNode();
		if (a == NULL) {
			a = tmp;
		}
		else {
			hs p = a;
			while (p->next != NULL) {
				p = p->next;
			}
			p->next = tmp;
		}
}
void intt1hs(hocSinh s)
{
	cout << "\n--------------------------";
	cout << "\nHo ten: " << s.ten << endl;
	cout << "Diem van: " << s.diemVan << endl;
	cout << "Diem toan: " << s.diemToan << endl;
	float dtb = (s.diemToan + s.diemVan)/ 2;
	cout << "Diem trung binh: " << dtb << endl;
	if (dtb >= 8) cout << "xep loai: Gioi";
	else if(dtb>=7 ) cout << "xep loai: Kha";
	else if (dtb >= 5) cout << "xep loai: Trung binh";
	else cout << "xep loai: Yeu";
	cout << "\n--------------------------";
}
void in(hs a)
{
	cout << "\nDANH SACH HOC SINH";
	while (a != NULL)
	{
		intt1hs(a->s);
		a = a->next;
	}
	cout << endl;
	cout << "\n--------------------------";
}
void menu()
{
	hs head = NULL;
	while (1)
	{
		cout << "------------MENU----------\n";
		cout << "1. Nhap thong tin mot hoc sinh\n";
		cout << "2.xuat thong tin hoc sinh\n";
		cout << "0. Thoat\n";
		cout << "--------------------------\n";
		cout << "Nhap lua chon: ";
		int lc;
		cin >> lc;
		if (lc == 1) themHs(head);
		else if (lc == 2) in(head);
		else if (lc == 0) break;

	}
}
int main()
{
	menu();
	return 0;
}