#include "List.h"

List::List() {
    this->soLuong = 0;
}

List::~List() {
    delete[] this->NV;
}

int List::getSoLuong() {
    return this->soLuong;
}
void List::setSoLuong(const int& soLuong) {
    this->soLuong = soLuong;
}

void List::show() {
    for(int i = 0; i < this->soLuong; i++) {
        cout << "-----------------------------------\n";
        cout << "Thong tin nhan vien thu " << i + 1 << endl;
        cout << *(this->NV + i);
    }
    cout << "-----------------------------------\n";
}

void List::addNV(NhanVien nv, int index) {
    NhanVien *tmp = new NhanVien[this->soLuong + 1];
    if(this->soLuong != 0) {
        for(int i = 0; i < this->soLuong; i++) {
            *(tmp + i) = *(this->NV + i);
        }
        for(int i = this->soLuong - 1; i >= index; i--) {
            *(tmp + i + 1) = *(tmp + i);
        }
        delete[] this->NV;
    }
    *(tmp + index) = nv;
    this->soLuong++;
    this->NV = new NhanVien[this->soLuong];
    for(int i = 0; i < this->soLuong; i++) {
        *(this->NV + i) = *(tmp + i);
    }
    delete[] tmp;
}

void List::addNVFirst(NhanVien nv) {
    List::addNV(nv, 0);
}

void List::addNVLast(NhanVien nv) {
    List::addNV(nv, this->soLuong);
}

void List::removeNV(int index) {
    for(int i = index + 1; i < this->soLuong; i++) {
        *(this->NV + i - 1) = *(this->NV + i);
    }
    this->soLuong--;
    NhanVien *tmp = new NhanVien[this->soLuong];
    for(int i = 0; i < this->soLuong; i++) {
        *(tmp + i) = *(this->NV + i);
    }
    delete[] this->NV;
    this->NV = new NhanVien[this->soLuong];
    for(int i = 0; i < this->soLuong; i++) {
        *(this->NV + i) = *(tmp + i);
    }
    delete[] tmp;
}

void List::removeNVFirst() {
    List::removeNV(0);
}

void List::removeNVLast() {
    List::removeNV(this->soLuong - 1);
}

void List::updateNV(const string& maNV) {
    for(int i = 0; i < this->soLuong; i++) {
        if((*(this->NV + i)).getMaNV() == maNV) {
            cin >> *(this->NV + i);
            return;
        }
    }
    cout << "Ma nhan vien khong ton tai!\n";
}

int List::interpolation_search(double x) {
    int left = 0;
    int right = this->soLuong - 1;
    while (left <= right && x >= (*(this->NV + left)).getLuong() && x <= (*(this->NV + right)).getLuong()){
        double val1 = (x - (*(this->NV + left)).getLuong()) / ((*(this->NV + right)).getLuong()-(*(this->NV + left)).getLuong());
        int val2 = right - left;
        int pos = (int) left + val1 * val2;
        if ((*(this->NV + pos)).getLuong() == x) {
            return pos;
        }
        if ((*(this->NV + pos)).getLuong() < x)
            left = pos + 1;
        else
            right = pos - 1;
    }
    return -1;
}

void List::merge(int l, int m, int r, bool (*ComFunc)(double, double)) {
    int n1 = m - l + 1;
    int n2 =  r - m;
    NhanVien *tmp1 = new NhanVien[n1];
    NhanVien *tmp2 = new NhanVien[n2];
    for(int i = 0; i < n1; i++) {
        *(tmp1 + i) = *(this->NV + l + i);
    }
    for(int i = 0; i < n2; i++) {
        *(tmp2 + i) = *(this->NV + m + i + 1);
    }
    int i = 0, j = 0;
	while(i < n1 && j < n2) {
		if(ComFunc((*(tmp1 + i)).getLuong(), (*(tmp2 + j)).getLuong())) {
            *(this->NV + l) = *(tmp1+ i);
            l++;
            i++;
        } else {
            *(this->NV + l) = *(tmp2+ j);
            l++;
            j++;
        }
	}
	while(i < n1) {
		*(this->NV + l)= *(tmp1 + i);
		l++;
		i++;
	}
	while(j < n2) {
		*(this->NV + l) = *(tmp2 + j);
		l++;
		j++;
	}
}

void List::mergeSort_Luong(int l, int r, bool ComFunc(double, double)) {
	if(l == r) return;
	if(l < r) {
		int m = (l + r) / 2;
		mergeSort_Luong(l, m, ComFunc);
		mergeSort_Luong(m + 1, r, ComFunc);
		merge(l, m, r, ComFunc);
	}
}

NhanVien& List::operator[](const int& index) {
    static NhanVien nv;
    if(index >= 0 && index < this->soLuong) {
        return *(this->NV + index);
    } else return nv;
}
