// 3.4.3.6.6
#include<stdio.h>
#include<math.h>

int nhapso() {
	unsigned int n;
	do {
		printf("moi nhap so nguyen duong: ");
		scanf("%u", &n);
	} while (n <= 0);
	return (n);
}

void main() {
	unsigned int n, m;
	n = nhapso();
	m = nhapso();

	printf("Cac uoc cua %u nho hon %u:", n, m);

	for (int i = 1; i < n/2; i++) {
		if (n % i == 0 and i < m) {
			printf("%-5d", i);
		}
	}
}