#include<stdio.h>
#include<math.h>

int nhapso() {
	unsigned int n;
	printf("moi nhap so nguyen duong: ");
	scanf("%u", &n);
	return n;
}

int tachso(unsigned int n) {
	unsigned int count = 0;
	unsigned int a = n;
	while (a > 0) {
		a /= 10;
		count += 1;
	}
	unsigned int k = pow(10, count-1);
	unsigned int sd = n / k;
	return sd;
}

int demsotach(unsigned int n, unsigned int k) {
	unsigned int count = 0;
	unsigned int a = n;
	while (a > 0) {
		unsigned int b = a % 10;
		if (b == k) {
			count += 1;
		}
		a /= 10;
	}
	return count;
}

void main() {
	unsigned int n, m=0, k=0;
	n = nhapso();
	m = tachso(n);
	printf("Chu so dau tien la %u\n", m);
	k = demsotach(n, tachso(n));
	printf("co %u chu so %u", k, m);
}