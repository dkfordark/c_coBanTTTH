#include<stdio.h>

#define size 10
#define sizedx 9

void xuatmangdx(int mang[sizedx]) {
	for (int i = 0; i < sizedx; i++) {
		printf("%d ", mang[i]);
	}
	printf("\n");
}

void xuatmang(int mang[size]) {
	for (int i = 0; i < size; i++) {
		printf("%d ", mang[i]);
	}
	printf("\n");
}

void ktrmangtang(int mang[size]) {
	int ck = 1;// mang tang
	for (int i = 0; i < size-1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (mang[j] <= mang[i]) {
				ck = 0;
				break;
			}
		}
	}
	
	if (ck == 0) {
		printf("Mang ko tang");
	}
	else {
		printf("Mang tang");
	}
}

void ktrmanggiam(int mang[size]) {
	int ck = 1;// mang giam
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (mang[j] > mang[i]) {
				ck = 0;
				break;
			}
		}
	}

	if (ck == 0) {
		printf("Mang ko giam");
	}
	else {
		printf("Mang giam");
	}
}

void ktrmangdxung(int mang[sizedx]) {
	int ck = 1; // gia su doi xung
	for (int i = 0; i < sizedx / 2; i++) {
		if (mang[i] != mang[sizedx - i - 1]) {
			ck = 0;
			break;
		}
	}
	
	if (ck == 0) {
		printf("Mang ko doi xung");
	}
	else {
		printf("Mang doi xung");
	}
}

void ktrmangcapsocong(int mang[size]) {
	int a = mang[1] - mang[0];
	printf("%d\n", a);
	int ck = 1; // la cap so cong
	for (int i = 1; i < size; i++) {
		if ((mang[i] - mang[i-1]) != a) {
			ck = 0;
			break;
		}
	}

	if (ck == 1) {
		printf("mang theo cap so cong");
	}
	else {
		printf("mang ko theo cap so cong");
	}
}

void main() {
	int mangtang[size] = { 1,2,4,3,5,6,7,8,9,10 };
	int manggiam[size] = { 10,9,8,7,6,5,4,3,2,1 };
	int mangdx[sizedx] = { 6,1,2,3,4,3,2,1,5 };
	int mangCS[size] = { 1,2,3,4,5,6,7,8,9,10 };
	xuatmang(mangCS);
	//xuatmangdx(mangdx);
	//ktrmangtang(mangtang);
	//ktrmanggiam(manggiam);
	//ktrmangdxung(mangdx);
	ktrmangcapsocong(mangCS);
}