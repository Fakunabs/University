// Viết chương trình tìm số nguyên tố nhỏ nhất lớn hơn n


#include <bit/stdc++.h>

int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap so n"); 
    scanf("%d", &n);
    int i;
    for (i = n + 1; i < 1000000; i++) {
        if (isPrime(i)) {
            printf("%d", i);
            break;
        }
    }
    return 1;
}
