#include<stdio.h>

int nhapso() {
	unsigned int n;
	do {
		printf("moi nhap so nguyen duong >=2: ");
		scanf("%u", &n);
	} while (n < 0);
	return (n);
}

void main() {
	unsigned int n;
}