#include<stdio.h>
#define size 10

void swap(int* n, int* m) {
	int temp = *n;
	*n = *m;
	*m = temp;
}

void ThemPtu(int mang[size], int &n, int giatri, int vitri) {
	for (int i = n; i > vitri; i--) {
		mang[i] = mang[i - 1];
	}
	mang[vitri] = giatri;
	n++;
}

void ThemPtuSauChan(int mang[size], int& n, int giatri) {
	int i = 0, j = 0;
	for (i = n - 1; i >= 0; i--) {
		if (mang[i] %2 == 0) {
			n++;
			for (j = n - 1; j > i; j--) {
				mang[j] = mang[j - 1];
			}
			mang[j + 1] = giatri;
		}
	}
}


void XoaPtu(int mang[size], int &n, int vitri) {
	for (int i = vitri; i < n; i++) {
		mang[i] = mang[i + 1];
	}
	n--;
}

void main() {
	int mang[size] = { 1,2,3,6,3,3 };
	int n = 6;
	
	//int a = 10, b = 100;
	//swap(&a, &b);
	//printf("a:%d\tb:%d",a,b);

	//int k = 9;
	//int vitri = 3;

	//ThemPtu(mang, n, k, vitri);

	//XoaPtu(mang, n, 2);

	// them 6 sau gia tri 3;

	//for (int i = 0; i < n; i++) {
	//	if (mang[i] == 3) {
	//		ThemPtu(mang, n, 6, i);
	//		//printf("Vi tri 3:%d",i);
	//		n++;
	//	}
	//}
	ThemPtuSauChan(mang, n, 9);

	for (int i = 0; i < n; i++) {
		printf("%d ", mang[i]);
	}
}