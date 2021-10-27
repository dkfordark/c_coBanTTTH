#include<stdio.h>

int tChan(unsigned int n) {
	int t = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			t += i;
		}
	}
	return t;
}

void main() {
	unsigned int n;
	printf("Vui long nhap so nguyen duong n: ");
	scanf("%u", &n);
	printf("Tong cac so chan <= %u la %u", n, tChan(n));
}