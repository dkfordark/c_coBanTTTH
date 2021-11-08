#include<stdio.h>
#define size 100

void ThemCuoi(int a[], int &n, int x) {
	a[n] = x;
	n++;
}

void ThemVaoViTri(int a[size], int &n, int x, int vitri) {
	for (int i = n; i > vitri; i--) {
		a[i] = a[i - 1];
	}
	a[vitri] = x;
	n++;
}

void XoaVitri(int a[size], int& n, int vitri) {
	for (int i = vitri; i < n-1; i++) {
		a[i] = a[i + 1];
	}
	n--;
}

void main() {
	int n = 6;
	int mang[size] = { 2,4,3,0,1,0 };
	/*ThemCuoi(mang, n, 111);*/
	//ThemVaoViTri(mang, n, 123, 1);

	XoaVitri(mang, n, 3 );
	for (int i = 0; i < n; i++) {
		printf("%d\t", mang[i]);
	}
}