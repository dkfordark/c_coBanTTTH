#include<stdio.h>

int nhapso() {
	unsigned int n;
	do {
		printf("moi nhap so nguyen duong: ");
		scanf("%u", &n);
	} while (n <= 0);
	return (n);
}

unsigned int tongDonSo(unsigned int n) {
	unsigned int a = 0, tong = 0;
	while (n > 0) {
		a = n % 10;
		tong = tong * 10 + a;
		n /= 10;
	}
	return tong;
}

void main() {
	unsigned int n, s=0;
	n = nhapso();
	s = tongDonSo(n);
	printf("So dao: %u", s);
}