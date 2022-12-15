#include <stdio.h>

struct SinhVien{
	char Maso[100];
	float DiemTB;
	char Ten[100];
};
typedef struct SinhVien SV;

void NhapDulieu(SV &x) {
	printf("\nNhap vao ho ten: "); scanf("%s", &x.Ten);
	printf("\nNhap Ma so sinh vien: "); scanf("%s", &x.Maso);
	do {
		printf("\nNhap diem trung binh nam hoc: ");
		scanf("%f", &x.DiemTB);
		if (x.DiemTB < 0 || x.DiemTB >10) printf("\n Diem TB khong hop le. Xin kiem tra lai!");
	} while (x.DiemTB < 0 || x.DiemTB > 10);
}
void NhapN(SV a[], int n){
	printf("Lop co %d sinh vien", n);
	for (int i = 0; i < n; ++i) {
		printf("\nNhap du lieu sinh vien thu %d", i+1);
		NhapDulieu(a[i]);
	}
	
}
void XuatSinhVien(SV x) {
	printf("\nTen : %s", x.Ten);
	printf("\nMa so : %s", x.Maso);
	printf("\nDiem TB : %g", x.DiemTB);
}
void XuatN(SV a[], int n){
	printf("\nDanh sach sinh vien lop:");
	for (int i = 0; i < n; ++i) {
		printf("\nThong tin sinh vien thu %d: ", i+1);
		XuatSinhVien(a[i]);
		printf("\n");
	}
}
void KiemTra(float x, SV a[], int n) {
	printf("\nThong tin sinh vien co diem TB > %g", x);
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i].DiemTB > x) {
			cnt++;
			printf("\nSTT %d", cnt);
			XuatSinhVien(a[i]);
		}
	}
	if (cnt <= 0) printf("\nKhong co sinh vien co diem TB > %g: ", x);
}
void Check(float x, SV a[], int n){
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i].DiemTB == x) {
			//cnt++;
		//	printf("\nSTT %d", cnt);
			XuatSinhVien(a[i]);
		}
	}
}
void DiemTB_50(SV a[], int n) {
	printf("\nDanh sach SV co diem TB cao nhat");
	float 50 = a[0].DiemTB;
	for (int i = 1; i < n; i++) 
		if (a[i].DiemTB > 50) 
			50 = a[i].DiemTB;
	Check(50,a,n);
}
int main(){
	int n;
	do {
        printf("\nNhap so luong SV: "); scanf("%d", &n);
    }while(n <= 0);
    SV a[n];
    float x;
    NhapN(a,n);
    NhapDulieu(x);
    XuatSinhVien(x);
    XuatN(a,n);
    
     printf("\nNhap diem TB x = "); scanf("%f", &x);
     
    KiemTra(x, a,n);
    DiemTB_50(a,n);
	return 0;
}