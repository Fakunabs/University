#include <bits/stdc++.h>
using namespace std;
class phanSo
{
	// ----- Attributes -----
protected:
	int tuso;
	int mauso;
	// ----- Methods -----
public:
	// ----- Nhập giá trị phân số -----
	void nhapPhanSo()
	{
		do
		{
			cout << "\nNhap tu so: "; cin >> this->tuso;
			cout << "\nNhap mau so: "; cin >> this->mauso;
			if (this->mauso == 0)
			{
				cout << "\nMau so phai khac 0 ";
			}
		} while (this->mauso == 0);
	}
	// ----- xuất giá trị phân số -----
	void xuatPhanSo()
	{
		cout << this->tuso << "/" << this->mauso << "	";
	}
	// ----- Lấy tử số -----
	int getTuSo()
	{
		return this->tuso;
	}
	// ----- Lấy mẫu số -----
	int getMauSo()
	{
		return this->mauso;
	}
	// ----- Gán tử số -----
	void setTuSo(int tuso)
	{
		this->tuso = tuso;
	}
	// ----- Gán mẫu số -----
	void setMauSo(int mauso)
	{
		if (mauso == 0)
		{
			cout << "\nMau so phai khac 0";
		}
		else
		{
			this->mauso = mauso;
		}
	}
	// ----- Rút gọn phân số -----
	void rutGonPhanSo()
	{
		int n = UCLN(this->tuso, this->mauso);
		this->tuso = this->tuso / n;
		this->mauso = this->mauso / n;
	}
	// ----- Phân số nghịch đảo -----
	void nghichDao()
	{
		int temp = tuso;
		tuso = mauso;
		mauso = temp;
	}
	// ----- Cộng 2 phân số -----
	void congPhanSo(phanSo PS)
	{
		this->tuso = this->tuso * PS.mauso + PS.tuso * this->mauso;
		this->mauso = this->mauso * PS.mauso;
		rutGonPhanSo();
	}
	// ----- Trừ 2 phân số -----
	void truPhanSo(phanSo PS)
	{
		this->tuso = this->tuso * PS.mauso - PS.tuso * this->mauso;
		this->mauso = this->mauso * PS.mauso;
		rutGonPhanSo();
	}
	// ----- Nhân 2 phân số -----
	void nhanPhanSo(phanSo PS)
	{
		this->tuso = this->tuso * PS.tuso;
		this->mauso = this->mauso * PS.mauso;
		rutGonPhanSo();
	}
	// ----- Chia 2 phân số -----
	void chiaPhanSo(phanSo PS)
	{
		this->tuso = this->tuso * PS.mauso;
		this->mauso = this->mauso * PS.tuso;
		rutGonPhanSo();
	}
	// ----- So sánh 2 phân số -----
	void soSanhPhanSo(phanSo PS)
	{
		if (this->tuso * PS.mauso == this->mauso * PS.tuso)
		{
			cout << "\n2 Phan so bang nhau";
		}
		else
		{
			if (this->tuso * PS.mauso > this->mauso * PS.tuso)
			{
				cout << "Phan so " << this->tuso << "/" << this->mauso << " lon hon ";
			}
			else if(this->tuso * PS.mauso < this->mauso * PS.tuso)
			{

			}cout << "Phan so " << this->tuso << "/" << this->mauso << " nho hon ";
		}
	}
	// ----- Constructor , Destructor -----
public:
	phanSo()
	{
		this->tuso = 0;
	}
	phanSo(int tuso, int mauso)
	{
		this->tuso = tuso;
		this->mauso = mauso;
	}
	phanSo(int soNguyen)
	{
		this->tuso = soNguyen;
		this->mauso = 1;
	}
	phanSo(const phanSo &PS)
	{
		this->tuso = PS.tuso;
		this->mauso = PS.mauso;
	}
	~phanSo()
	{

	}
};
