#include<stdio.h>
#include<math.h>

int ktraTLE(unsigned int n) {
	unsigned int so = 0;
	unsigned int check = 0; 
	while (n > 0) {
		so = n % 10;
		if (so %2 == 0) {
			check = 1;
			break;
		}
		n /= 10;
	}
	return check;
}

int nhapso() {
	unsigned int n;
	do {
		printf("moi nhap so nguyen duong: ");
		scanf("%u", &n);
	} while (n <= 0);
	return (n);
}

void main() {
	unsigned int n, check = 0;
	n = nhapso();
	check = ktraTLE(n);
	
	if (check == 1) {
		printf("So %u KHONG toan le",n);
	}
	else if (check == 0) {
		printf("So %u toan le",n);
	}
}