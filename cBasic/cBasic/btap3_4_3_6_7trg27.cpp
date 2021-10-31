// 3.4.3.6.7
#include<stdio.h>
#include<math.h>

int nhapso() {
	unsigned int n;
	do {
		printf("moi nhap so nguyen duong la luy thua cua 2^k = ");
		scanf("%u", &n);
	} while (n <= 0);
	return (n);
}

int somu(unsigned int n) {
	unsigned int dem = 0;
	while (n > 1) {
		n /= 2;
		dem += 1;
	}
	return dem;
}

void main() {
	unsigned int n, dem =0;
	n = nhapso();
	dem = somu(n);
	printf("So mu k = %u", dem);
}