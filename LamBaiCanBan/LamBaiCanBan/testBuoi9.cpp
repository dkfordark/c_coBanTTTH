#include<stdio.h>
#include<stdlib.h>
#include<time.h>


# define size 100

unsigned int nhapsoND() {
	unsigned int n;
	do {
		printf("moi nhap so nguyen duong > 0: ");
		scanf("%u", &n);
	} while (n <= 0);
	return (n);
}

unsigned int cdaiMang() {
	unsigned int n;
	do {
		printf("moi nhap chieu dai mang: ");
		scanf("%u", &n);
	} while (n <= 0);
	return (n);
}


bool ktraSNT(unsigned int n) {
	int ktra = 1; // 1 la SNT
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			ktra = 0;
			break;
		}
	}

	if (ktra == 1 && n > 1) {
		return true;
	}
	else {
		return false;
	}
}

void main() {
	srand(unsigned int(time(NULL)));
	int a[size];

	int n = cdaiMang();

	for (int i = 0; i < n; i++) {
		a[i] = rand() % 20 + 1;
		printf("a[%d]:%d\n",i,a[i]);
	}

}