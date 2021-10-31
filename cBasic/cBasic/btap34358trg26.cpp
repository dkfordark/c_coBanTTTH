// c34358trg26
#include <stdio.h>

int nhapso() {
	unsigned int n;
	printf("moi nhap so nguyen duong: ");
	scanf("%u", &n);
	return n;
}

int demSoLon(unsigned int n, unsigned int sl){
	
	unsigned int c = 0;
	while (n > 0) {
		unsigned int a = n % 10;
		if (a == sl) {
			c += 1;
		}
		n /= 10;
	}
	return c;
}

int soLonNhat(unsigned int n) {
	unsigned int c = 0, sl=0, t = n;
	while (n > 0) {
		unsigned int a = n % 10;
		if (a > sl) {
			sl = a;
		}
		n /= 10;
		c += 1;
	}
	return demSoLon(t, sl);
	//return sl;
}

int soLonNhat0(unsigned int n) {
	unsigned int c = 0, sl = 0, t = n;
	while (n > 0) {
		unsigned int a = n % 10;
		if (a > sl) {
			sl = a;
		}
		n /= 10;
		c += 1;
	}
	//return demSoLon(t, sl);
	return sl;
}

void main() {
	//
	unsigned int n;
	n = nhapso();
	printf("So %u la lon nhat\n", soLonNhat0(n));
	printf("co %u lan xuat hien so %u\n",soLonNhat(n), soLonNhat0(n));
}