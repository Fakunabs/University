
#include<stdio.h>
 
const char CHAR_55 = 55;
const char CHAR_48 = 48;
 
/**
 * n: so nguyen
 * b: he co so
 */
int convertNumber(int n, int b) {
    if (n < 0 || b < 2 || b > 16 ) {
        printf("He co so hoac gia tri chuyen doi khong hop le!");
        return 0;
    }
    int i;
    char arr[20];
    int count = 0;
    int m;
    int remainder = n;
    while (remainder > 0) {
        if (b > 10) {
            m = remainder % b;
            if (m >= 10) {
                arr[count] = (char) (m + CHAR_55);
                count++;
            } else {
                arr[count] = (char) (m + CHAR_48);
                count++;
            }
        } else {
            arr[count] = (char) ((remainder % b) + CHAR_48);
            count++;
        }
        remainder = remainder / b;
    }

    for (i = count - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    return 1;
}
 
int main() {
	
	//Nhap so nguyen can chuyen doi, luu vao n;
	//Nhap he co so, luu vao b;
    convertNumber(3295, 8);
    return 1;
}
