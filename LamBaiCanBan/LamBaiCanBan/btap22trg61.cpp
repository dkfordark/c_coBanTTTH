#include<stdio.h>
#define size 10

void xuatMang(int a[size]) {
	printf("Gia tri trong mang: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
}

void check0(int a[size]) {
	int ck = 0;
	for (int i = 0; i < size; i++) {
		printf("%d", a[i]);
		if (a[i] == 0) {
			
			ck = 1;
			break;
		}
		else {
			ck = 0;
		}
	}

	if (ck == 1) {
		printf("\n1");
	}
	else {
		printf("\n0");
	}
}

void checkAm(int a[size]) {
	int ck = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] < 0) {
			ck = 1;
			printf("%d", a[i]);
			break;
		}
		else {
			ck = 0;
		}
	}

	if (ck == 1) {
		printf("\nmang co chua so am");
	}
	else {
		printf("\nmang ko chua so am");
	}
}

bool soNguyenTo(int n) {
	int KT = 1;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			KT=0;
			break;
		}
	}

	if (KT == 1 && n != 1) {
		return true;
		//printf("day la so nguyen to");
	}
	else {
		return false;
		//printf("ko phai so nguyen to");
	}
}

void mangSNT(int a[size]) {
	for (int i = 0; i < size; i++) {
		if (soNguyenTo(a[i])) {
			printf("%d ", a[i]);
		}
	}
}

bool soHT(int a) {
	int tong = 0;
	for (int i = 1; i < a; i++) {
		if (a % i == 0) {
			tong += i;
		}
	}

	if (tong == a) {
		return true;
	}
	else {
		return false;
	}
}

void mangSHT(int a[size]) {
	for (int i = 0; i < size; i++) {
		if (soHT(a[i])) {
			printf("%d ", a[i]);
		}
	}
}

void checkX(int a[size], int x) {
	int ck = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] <= x) {
			ck = 1;
			break;
		}
		else {
			ck = 0;
		}
	}

	if (ck == 1) {
		printf("\nMang co chua gia tri <=%d",x);
	}
	else {
		printf("\nMang ko chua gia tri <=%d", x);
	}
}

void checkBSx(int a[size], int x) {
	int ck = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] % x ==0) {
			ck = 1;
			break;
		}
		else {
			ck = 0;
		}
	}

	if (ck == 1) {
		printf("\nMang co chua boi so cua %d", x);
	}
	else {
		printf("\nMang ko chua boi so cua %d", x);
	}
}

void checkUSx(int a[size], int x) {
	int ck = 0;
	for (int i = 0; i < size; i++) {
		if (x%a[i] == 0) {
			ck = 1;
			break;
		}
		else {
			ck = 0;
		}
	}

	if (ck == 1) {
		printf("\nMang co chua uoc so cua %d", x);
	}
	else {
		printf("\nMang ko chua uoc so cua %d", x);
	}
}

void main() {
	int mang[size] = { 6,5,3,28,11,-23,-11,8128,8,9 };
	xuatMang(mang);
//	check0(mang);
//	checkAm(mang);
//	mangSNT(mang);	
//	mangSHT(mang);
	int thamsoX = 3;
	//checkX(mang, thamsoX);
	checkBSx(mang, thamsoX);
	checkUSx(mang, thamsoX);
}