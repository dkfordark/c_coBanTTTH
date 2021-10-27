#include <stdio.h>
#include <math.h>

int ktraCP(unsigned int n) {
	int a = sqrt(n);
	if (pow(a, 2) == n) {
		return 1; // so chinh phuong
	}
	else {
		return 2; // ko phai SCP
	}
}

void ktra2CP(unsigned int n) {
	int a = sqrt(n);
	if (pow(a, 2) == n) {
		printf("%u la so chinh phuong", n); 
	}
	else {
		printf("%u ko la so chinh phuong", n);
	}
}

void main() {
	unsigned int n;
	printf("vui long nhap so nguyen duong n: ");
	scanf("%u", &n);
	
	/*if (ktraCP(n) == 1) {
		printf("%u la so chinh phuong",n);
	}
	else {
		printf("%u ko la so chinh phuong",n);
	}*/

	ktra2CP(n);
}