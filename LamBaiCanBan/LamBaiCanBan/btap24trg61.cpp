#include<stdio.h>

#define size 8

void xuatMang(int a[size]) {
	printf("Gia tri trong mang: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
}

bool checkAm(int a[size]) {
	for (int i = 0; i < size; i++) {
		if (a[i] > 0) {
			return false;
		}
		else {
			return true;
		}
	}
}


void main() {
	int mang[size] = { -3,-40,-51,-63,-24,-3,-76,-123 };
	xuatMang(mang);
	if (checkAm(mang)) {
		printf("\nMang chua toan am");
	}
	else {
		printf("\nmang co so duong");
	}
}
