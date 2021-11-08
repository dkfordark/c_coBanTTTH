#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define size 100

unsigned int cdaiMang() {
	unsigned int n;
	do {
		printf("moi nhap chieu dai mang: ");
		scanf("%u", &n);
	} while (n <= 0);
	return (n);
}

int mangAmDuong(unsigned int n) {
	for (int i = 0; i < n; i++) {

	}
}

void mangtheoDK(int a[size], int n) {
	int min = 50;
	int max = 100;
	for (int i = 0; i < n; i++) {
		a[i] = (rand() % (max - min + 1)) + min;
	}
}


void main() {
	unsigned int n;
	int a[size];
	srand(unsigned int(time(NULL)));

	n = cdaiMang();
	
}