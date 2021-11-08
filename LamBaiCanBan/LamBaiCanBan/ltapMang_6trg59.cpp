#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define size 100

unsigned int cdaiMang() {
	unsigned int n, x=0;
	do {
		printf("moi nhap chieu dai mang >0 : ");
		scanf("%u", &n);
	} while (n <=0);
	return n;
}

void mangTang(int a[size], int n) {
	int x = 0;
	for (int i = 0; i < n; i++) {
		x += (rand() % 20 + 1);
		a[i] = x;
		printf("a[%d]:%d\n", i, a[i]);
	}
}

void mangGiam(int a[size], int n) {
	int x = 0;
	for (int i = 0; i < n; i++) {
		x -= (rand() % 20 + 1);
		a[i] = x;
		printf("a[%d]:%d\n", i, a[i]);
	}
}

void main() {
	int a[size];
	srand(unsigned int(time(NULL)));
	unsigned int n;
	n = cdaiMang();
	//mangTang(a, n);
	mangGiam(a, n);
}