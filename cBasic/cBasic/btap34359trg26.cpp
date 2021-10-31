// c34358trg26
#include <stdio.h>

int nhapso() {
	unsigned int n;
	printf("moi nhap so nguyen duong: ");
	scanf("%u", &n);
	return n;
}

int demNho(unsigned int n, unsigned int sn) {

	unsigned int c = 0;
	while (n > 0) {
		unsigned int a = n % 10;
		if (a == sn) {
			c += 1;
		}
		n /= 10;
	}
	return c;
}

int soNhoNhat(unsigned int n) {
	unsigned int c = 0, sn = 0, t = n;
	while (n > 0) {
		unsigned int a = n % 10;
		if (a < sn) {
			sn = a;
		}
		n /= 10;
		c += 1;
	}
	return demNho(t, sn);
	//return sl;
}

int soNhoNhat0(unsigned int n) {
	unsigned int c = 0, sn = 0, t = n;
	while (n > 0) {
		unsigned int a = n % 10;
		if (a < sn) {
			sn = a;
		}
		n /= 10;
		c += 1;
	}
	//return demNho(t, sn);
	return sn;
}

void main() {
	//
	unsigned int n;
	n = nhapso();
	printf("So %u la nho nhat\n", soNhoNhat0(n));
	printf("co %u lan xuat hien so %u\n", soNhoNhat(n), soNhoNhat0(n));
}