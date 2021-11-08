#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define dong 20
#define cot 20

bool KiemTraSoNguyenTo(int n) {
	int kt = 1;

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			kt = 0;
		}
	}
	
	if (kt == 1 && n > 0) {
		return true;
	}
	else {
		return false;
	}
}

void NhapDongCot(int& d, int& c) {
	do {
		printf("Vui long nhap dong va cot > 0 : ");
		scanf("%d%d", &d, &c);
	} while (d < 0 || c < 0);
}

void TaoMang2Chieu(int mang[dong][cot],int d, int c) {
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < c; j++) {
			mang[i][j] = rand() % 30 + 1;
		}
	}
}

void TaoMangSoNguyenTo(int mang[dong][cot], int d, int c) {
	printf("Mang so nguyen to: ");
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < c; j++) {
			if (KiemTraSoNguyenTo(mang[i][j])) {
				printf("%5d", mang[i][j]);
			}
		}
	}
}

void XuatMang(int mang[][cot], int d, int c) {
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < c; j++) {
			printf("%5d", mang[i][j]);
		}
		printf("\n");
	}
}

void GiaTriTrungBinhM2Chieu(int mang[dong][cot], int d, int c) {
	unsigned int dem = 0, tong = 0;
	for (int i = 0; i < d; i++) {
		for (int j = 0; j < c; j++) {
			dem += 1;
			mang[i][j] = rand() % 30 + 1;
			tong += mang[i][j];
		}
		printf("\nGia tri trung binh dong %d: %d",i,tong/dem);
	}
	printf("\nGia tri trung binh cua mang 2 chieu: %u", tong / dem);
}

void main() {
	srand(unsigned int(time(NULL)));
	int d = 0, c = 0;
	int mang[dong][cot];
	int mangSNT[100];
	NhapDongCot(d,c);
	TaoMang2Chieu(mang, d, c);
	XuatMang(mang,d,c);
	TaoMangSoNguyenTo(mang, d, c);
	GiaTriTrungBinhM2Chieu(mang,d,c);
}