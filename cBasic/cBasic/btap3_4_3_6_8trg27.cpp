// 3.4.3.6.8
#include<stdio.h>
#include<math.h>

int nhapso() {
	unsigned int n;
	do {
		printf("moi nhap so nguyen duong >=2: ");
		scanf("%u", &n);
	} while (n < 2);
	return (n);
}

void main() {
    unsigned int n;
    n = nhapso();
    printf("Thua so: ");
    for (int i = 2; i <= n / 2; i++) {
        while (n % i == 0) {
            n /= i;
            printf("%d", i);
            if (n >= i) {
                printf("*");
            }
        }
    }
}

// Tham khao mang
//int n;
//printf("\nNhap n = ");
//scanf("%d", &n);
//int dem;

//for (int i = 2; i <= n; i++) {
//    dem = 0;
//    while (n % i == 0) {
//        ++dem;
//        n /= i;
//    }
//    if (dem) {
//        if (dem > 1) printf("%d^%d", i, dem);
//        else printf("%d", i);
//        if (n > i) {
//            printf(" * ");
//        }
//    }
//}