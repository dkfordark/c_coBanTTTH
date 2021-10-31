#include<stdio.h>

int nhapso() {
	unsigned int n;
	do {
		printf("moi nhap so nguyen duong: ");
		scanf("%u", &n);
	} while (n <= 0);
	return (n);
}

int ktra2muk (unsigned int n) {
	unsigned int tich=1, i =1, check = 0;
	
	while (tich <= n) {
		tich *= 2;
	}
//	printf("%u\n", tich);
	
	if (tich / 2 == n) {
		check = 1;
	}
//	printf("So nhap n: %u\n", n);
//	printf("%u\n", check);
	return check;
}


void main() {
	unsigned int n, check = 0;
	n = nhapso();
	check = ktra2muk(n);

	if (check == 1) {
		printf("%u la so 2 mu k",n);
	}
	else {
		printf("%u KHONG la so 2 mu k",n);
	}
}