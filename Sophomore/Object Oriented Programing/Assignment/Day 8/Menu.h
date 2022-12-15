#include "Quanly.h"
#include <iostream>
using namespace std;


void Menu() {
	cout << "\n---- QUAN LI NHAN VIEN ----\n";
	cout << "\t1. Hien thi danh sach\n";
	cout << "\t2. Them doi tuong\n";
	cout << "\t3. Cap nhat thong tin\n";
	cout << "\t4. Xoa doi tuong\n";
	cout << "\t5. Tim kiem\n";
	cout << "\t6. Sap xep\n";
	cout << "---------------------------\n\n";

	quanly x;

	bool isRunning = true;
	while (isRunning)
	{
		Menu();
		int luachon = 1;

		cout << "Nhap lua chon: "; cin >> luachon;

		string id;
		nhan_vien* nhanvien;
		nhan_vien** nhanvien2;

		switch (luachon)
		{
		case 0:
			isRunning = false;
			break;
		case 1:
			cout << x;
			break;
		case 2:
			x.themnhanvien();
			break;
		case 3:
			do
			{
				cout << "Ma nhan vien (8 ki tu): "; cin >> id;
			} while (id.length() > 8);

			if (id.length() != 8)
			{
				string sub;
				for (int k = 0; k < 8 - id.length(); ++k)
					sub.insert(sub.begin(), '0');
				id = sub + id;
			}

			x.capnhatnhanvien(id);
			break;
		case 4:
			do
			{
				cout << "Ma nhan vien (8 ki tu): "; cin >> id;
			} while (id.length() > 8);

			if (id.length() != 8)
			{
				string sub;
				for (int k = 0; k < 8 - id.length(); ++k)
					sub.insert(sub.begin(), '0');
				id = sub + id;
			}

			x.xoanhanvien(id);

			break;
		case 5:
			do
			{
				cout << "Ma nhan vien (8 ki tu): "; cin >> id;
			} while (id.length() > 8);

			if (id.length() != 8)
			{
				string sub;
				for (int k = 0; k < 8 - id.length(); ++k)
					sub.insert(sub.begin(), '0');
				id = sub + id;
			}

			nhanvien = x.timkiem(id);

			if (nhanvien != nullptr)
			{
				cout << *nhanvien;
			}
			else
			{
				cout << "Khong tim thay du lieu!\n";
			}

			break;
		case 6:
			nhanvien2 = x.sapxep();

			for (int i = 0; i < x.laysoluongnhanvien(); ++i)
			{
				cout << "STT: " << i + 1 << '\n';
				cout << *nhanvien2[i];
			}

			break;
		default:
			break;
		}

		system("pause");
		system("cls");
	}
}