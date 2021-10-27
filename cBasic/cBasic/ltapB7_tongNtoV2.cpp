#include<stdio.h>

unsigned int ktraSNT(unsigned int n) {
	unsigned int t = 0, kt = 1; // dat 1 la SNT, 0 ko phai SNT
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			kt = 0;
			break;
		}
	}

	if (kt == 1 && n > 1) {
		t = n;
//		printf("%u la so nto", n);
	}
	else {
//		printf("%u ko phai la so nto");
		;
	}
	return t;
}

void main() {
	unsigned int n, t=0;
	printf("Moi nhap so nguyen duong n: ");
	scanf("%u", &n);
	//printf("%u",ktraSNT(n));
	
	printf("ca so nguyen to: ");
	for (int i = 0; i < n; i++) {
		printf("%u ", ktraSNT(i));
		t += ktraSNT(i);
	}
	printf("\nTong cac so nguyen to < %u la: %u", n, t);
}