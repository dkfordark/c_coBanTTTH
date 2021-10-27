#include <stdio.h>

unsigned int tinhtong(unsigned int n) {
	unsigned int t = 0;
	for (unsigned int i = 0; i <= n; i++) {
		t += i;
	}
	return t;
}

void main() {
	unsigned int n;
	printf("Vui long nhap so nguyen duong n: ");
	scanf("%u", &n);
	printf("Tong <=%u la %u", n,tinhtong(n));
}