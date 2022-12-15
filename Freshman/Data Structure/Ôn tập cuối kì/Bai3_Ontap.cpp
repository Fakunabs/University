#include <stdio.h>

float a[1001];
int n;
FILE *f;

void docFILE() {
	f = fopen("./data/Bai3_Ontap_Input.txt", "r");
	fscanf(f, "%d", &n );
	for (int i = 0; i < n; i++) fscanf(f, "%f", &a[i]);
	fclose(f);
	printf("Mang a nhap vao : ");
	for (int i = 0; i < n; i++) printf("%g  ", a[i]);
} 

void nhap() {
	printf("Nhap n = "); scanf("%d", &n);
	printf("Nhap mang a: \n");
	for (int i = 0; i < n; ++i) scanf("%f", &a[i]);
}

void xuat(float a[], int n) {
	for (int i = 0; i < n; i++) printf("%g  ", a[i]);
	printf("\n");
}
void Selection_Sort(float a[], int n) {
	fprintf(f, "Sap xep theo kieu Selection_Sort\n");
	printf( "Sap xep theo kieu Selection_Sort\n");
	for (int i = 0; i < n; i++){
		for (int j = i + 1 ; j < n; j++){
			if (a[i] > a[j]){
				float tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
		for (int t = 0; t < n; ++t) fprintf(f, "%g  ", a[t]);
		fprintf(f, "\n");
		xuat(a,n);
	}
}

//SX chen
void Insertion_sort(float a[], int n) {
	fprintf(f, "Sap xep theo kieu Insertion_Sort\n");
	printf( "Sap xep theo kieu Insertion_Sort\n");
    for (int i = 1; i < n; i++) { 
        float ktra = a[i]; 
        int j = i - 1; 
        while(j >= 0 && a[j] > ktra) { 
            a[j + 1] = a[j];
            j--;
        } 
        a[j + 1] = ktra; 
        for (int t = 0; t < n; ++t) fprintf(f, "%g  ", a[t]);
		fprintf(f, "\n");
		xuat(a,n);
    }
}

// SX noi bot
void Bubble_sort(float a[], int n) {
	fprintf(f, "Sap xep theo kieu Bubble_sort\n");
	printf("Sap xep theo kieu Bubble_sort\n");
    for(int i = 0; i < n - 1; i++) {
        for(int j = n - 1; j > i; j--) {
            if(a[j - 1] > a[j]) {
                float tmp = a[j]; 
                a[j] = a[j - 1]; 
                a[j - 1] = tmp;
            }
        }
        for (int t = 0; t < n; ++t) fprintf(f, "%g  ", a[t]);
		fprintf(f, "\n");
		xuat(a,n);
    }
}

// SX nhanh
int Chia(float a[],int l, int r) {
		float x = a[l];
		int i = r;
		for (int j = r; j > l; j--){
			if (a[j] >= x){
				float tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
				i--;
			}
		}
		float tmp1 = a[i];
		a[i] = a[l];
		a[l] = tmp1;
		return i;
		
	}
void qsort(float a[], int l, int r) {
		if (l < r) {
			int c = Chia(a,l,r);
			for (int t = 0; t < n; ++t) fprintf(f, "%g  ", a[t]);
			fprintf(f, "\n");
			xuat(a,n);
			qsort(a,l,c-1);
			qsort(a,c+1,r);
			//	printf("[ %d ] ", c);
		}
		
	}

void QuickSort(float a[], int left, int right) {
	int i, j;
	float x;
	i = left;
	j = right;
	x = a[(left + right)/2];
	do {
		while (a[i] < x) i++;
		while (a[j] > x) j--;
		if (i <= j) {
			//Swap(a[i], a[j]);
			float tmp = a[i];
			a[i]  = a[j];
			a[j] = tmp;
			i++;
			j--;
		}
		for (int t = 0; t < n; ++t) fprintf(f, "%g  ", a[t]);
			fprintf(f, "\n");
			xuat(a,n);
		
	} while (i <= j);
	if (j > left) QuickSort(a, left, j);
	if (i < right) QuickSort(a, i, right);
}
int main(){
	int choice, cmt;
	printf("Nhan 1 de nhap du lieu bang File\n");
	printf("Nhan 2 de nhap du lieu tu ban phim\n\n");
	printf("Moi ban nhap: ");
	scanf("%d", &choice);

	while (choice != 1 && choice != 2) {
		printf("\nMoi ban nhap lai: ");
		scanf("%d", &choice);
	}
	switch (choice) {
	case 1:
		docFILE();
		break;
	case 2:
		nhap();
		break;
	}
	printf("\nNhan 1 de chon kieu sap xep Selection_Sort\n");
	printf("Nhan 2 de chon kieu sap xep Insertion_sort \n");
	printf("Nhan 3 de chon kieu sap xep Bubble_sort \n");
	printf("Nhan 4 de chon kieu sap xep Quick_sort \n");
	printf("\nMoi ban nhap: "); scanf("%d", &cmt);
	while (cmt < 1 || cmt > 5) {
		printf("\nMoi ban nhap lai: ");
		scanf("%d", &cmt);
	}
	f = fopen("./data/Bai3_Ontap_Output.txt", "w+");
	fprintf(f, "Mang a truoc khi sap xep: ");
	for (int i = 0; i < n; i++) fprintf(f, "%g  ", a[i]);
	fprintf(f, "\n");
	printf("\nMang truoc sap xep: ");
	for (int i = 0; i < n; i++) printf("%g  ", a[i]);
	printf("\n");
	switch(cmt) {
		case 1:
			Selection_Sort(a, n);
			break;
		case 2: 
			Insertion_sort(a,n);
			break;
		case 3:
			Bubble_sort(a, n);
			break;
		case 4:
			fprintf(f, "Sap xep theo kieu Quick_Sort\n");
			printf( "Sap xep theo kieu Quick_Sort\n");
			qsort(a, 0, n-1);
			break;
		case 5:
			fprintf(f, "Sap xep theo kieu QuickSort\n");
			printf("Sap xep theo kieu QuickSort\n");
			QuickSort(a,0, n-1);
			break;
	}
//	ghiFILE();
	fclose(f);
}
	