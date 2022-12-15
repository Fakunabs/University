#include <iostream>
using namespace std;

class IntArray
{
	// ----- Attributes -----
	int size;	// Số phần tử mảng
	int* data;
protected:
	
	// ----- Methods -----
public:
	void sao_chep(int a[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			data[i] = a[i];
		}
	}
	void khoi_tao_mang(int n)
	{
		this->size = n;
		data = new int[n];
	}
	void nhap()
	{
		for (int i = 0; i < this->size; i++)
		{
			cout << "\nNhap phan tu [" << i << "] = ";
			cin >> this->data[i];
		}
	}
	void xuat()
	{
		for (int i = 0; i < this->size; i++)
		{
			
			cout <<  this->data[i] << "		";
		}
	}
	//---- Lấy kích thước mảng ----
	int get_size()
	{
		return int(data) / sizeof(int);
	}
	// ----- Lấy phần tử tại vị trí nào đó.
	int get_pt(int vitri)
	{
		return data[vitri];
	}
	// ----- Gán giá trị cho phần tử tại vị trí nào đó.
	void set_pt(int giatri, int vitri)
	{
		this->data[vitri] = giatri;
	}
	void tim_pt(int giatri)
	{
		for (int i = 0; i < size; i++)
		{
			if (data[i] == giatri)
			{
				cout << "\nTim thay phan tu tai vi tri " << i << endl;
			}
		}
	}
	// ----- Sort -----
	void sap_xep_giam_dan()
	{
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 1; j < size; j++)
			{
				if (data[i] < data[j])
				{
					swap(data[i], data[j]);
				}
			}
		}
	}
	void sap_xep_tang_dan()
	{
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 1; j < size; j++)
			{
				if (data[i] > data[j])
				{
					swap(data[i], data[j]);
				}
			}
		}
	}
	// ----- Constructor , Destructor -----
	IntArray(IntArray &arr)
	{
		this->size = arr.size;
		this->data = arr.data;
	}
	IntArray()
	{
		for (int i = 0; i < size; i++)
		{
			data[i] = NULL;
		}
	}
	~IntArray()
	{
		delete[] data;
	}

};

int main()
{
	IntArray* a = new IntArray[10];
	return 0;
}