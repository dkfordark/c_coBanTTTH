#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define size 100

unsigned int cdaiMang() {
	unsigned int n;
	do {
		printf("moi nhap chieu dai mang tu 5-50: ");
		scanf("%u", &n);
	} while (n<5 or n>50);
	return (n);
}

void taosoAmDuong(int a[size], int n) {
	unsigned int x = 0;
	int dau = 0;
	for (int i = 0; i < n; i++) {
		x = rand();
		if (x % 2 == 0) {
			dau = -1;
		}
		else {
			dau = 1;
		}
		a[i] = dau * (rand() % 100 + 1);
		printf("%d\n", a[i]);
	}
}

void main() {
	int a[size];
	srand(int(time(NULL)));
	unsigned int n;
	n = cdaiMang();
	taosoAmDuong(a, n);
}