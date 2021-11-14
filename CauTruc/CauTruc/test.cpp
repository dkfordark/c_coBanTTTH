#include<stdio.h>
#include<string.h>
#define size 100

struct SinhVien {
	int MaSinhVien;
	char TenSinhVien[size];
	int NamSinh;
	float DTB;
};

void NhapSinhVien(SinhVien& sv) {
	printf("\nNhap Ma: "); scanf("%d", &sv.MaSinhVien);
	printf("\nNhap ten: ");
	rewind(stdin);
	gets_s(sv.TenSinhVien);
	printf("\nNhap nam sinh: ");
	scanf("%d", &sv.NamSinh);

	float DTB;
	do {
		printf("\nNhap DTB: ");
		scanf("%f", &DTB);
	} while (!(DTB >= 0 && DTB <= 10));
	sv.DTB = DTB;
}

void InSinhVien(SinhVien sv) {
	printf("\nMa: %d", sv.MaSinhVien);
	printf("\nTen: %s", sv.TenSinhVien);
	printf("\nNam sinh: %d", sv.NamSinh);
	printf("\nDTB: %.2f", sv.DTB);
}

void NhapMangSinhVien(SinhVien sv[size], int n) {
	for (int i = 0; i < n; i++) {
		printf("\nNhap thong tin sinh vien %d", i);
		NhapSinhVien(sv[i]);
	}
}

void InMangSinhVien(SinhVien sv[size], int n) {
	for (int i = 0; i < n; i++) {
		printf("\n Thong tin sinh vien %d,", i);
		InSinhVien(sv[i]);
	}
}

void main() {
	SinhVien sv[size];
	int n = 0;

	
}