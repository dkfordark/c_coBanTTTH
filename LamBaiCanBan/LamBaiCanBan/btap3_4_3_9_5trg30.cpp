#include <stdio.h>

bool ktraSNT(unsigned int n) {
	int kt = 1; // SNT
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			kt = 0;
			break;
		}
	}

	if (kt == 1 && n > 1) {
		return true;
	}
	else {
		return false;
	}
}

unsigned int nhapsoND() {
	unsigned int n;
	do {
		printf("Vui long nhap so nguyen duong > 0: ");
		scanf("%u", &n);
	} while (n <= 0);

	return n;
}

void main() {
	unsigned int n;
	n = nhapsoND();
	
	// cach 1
	//for (unsigned int i = n+1;; i++) {
	//	if (ktraSNT(i)) {
	//		printf("---> %u la nguyen to lon hon va gan voi %u nhat", i, n);
	//		break;
	//	}
	//}

	// cach 2:
	unsigned int i = n;
	do {
		i++;
	} while (ktraSNT(i) == false);
	printf("---> %u la nguyen to lon hon va gan voi %u nhat", i, n);
}