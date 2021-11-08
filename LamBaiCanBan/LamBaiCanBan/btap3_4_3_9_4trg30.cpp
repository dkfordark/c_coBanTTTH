#include<stdio.h>

unsigned int nhapsoND() {
	unsigned int n;
	do {
		printf("moi nhap so nguyen duong > 0: ");
		scanf("%u", &n);
	} while (n <= 0);
	return (n);
}

bool ktraSNT(unsigned int n) {
	int ktra = 1; // 1 la SNT
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			ktra = 0;
			break;
		}
	}

	if (ktra == 1 && n > 1) {
		return true;
	}
	else {
		return false;
	}
}

void main() {
	unsigned int n;
	n = nhapsoND();
	for (unsigned int i = n; i > 0; i--) {
		if (ktraSNT(i)) {
			printf("So nguyen to gan %u nhat la %u", n, i);
			break;
		}
	}
}