#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define size 100

//struct DanhSachNhanVien{
//	NhanVien nv[size];
//	int n = 0;
//};


struct NgayThang
{
	int Ngay;
	int Thang;
	int Nam;
};

struct NhanVien{
	int MaNhanVien;
	char TenNhanVien[50];
	NgayThang NamSinh;
	int GioiTinh;
	float Luong;
};

void NhapNgayThang(NgayThang& nt) {
	printf("\nNhap ngay:");
	scanf("%d", &nt.Ngay);
	printf("\nNhap thang:");
	scanf("%d", &nt.Thang);
	printf("\nNhap nam:");
	scanf("%d", &nt.Nam);
}

void NhapNhanVien(NhanVien& nv) {
	printf("\nNhap ma nv: ");
	scanf("%d", &nv.MaNhanVien);
	printf("\nNhap ten nv: ");
	rewind(stdin);
	gets_s(nv.TenNhanVien);
	//rewind(stdin);
	printf("\nNhap thong tin DOB");
	//scanf("%d", &nv.NamSinh);
	NhapNgayThang(nv.NamSinh);
	printf("\nNhap gioi tinh: ");
	scanf("%d", &nv.GioiTinh);
	printf("\nNhap luong: ");
	scanf("%f", &nv.Luong);
}



void InNgayThang(NgayThang nt) {
	printf("%d/%d/%d", nt.Ngay, nt.Thang, nt.Nam);
}

void InNhanVien(NhanVien nv) {
	printf("\nMSNV\tTenNV\tLuong\t\tGioiTinh\tDOB\n");
	printf("%d\t%s\t%.2f", nv.MaNhanVien, nv.TenNhanVien,nv.Luong);
	if (nv.GioiTinh == 1) {
		printf("\t\tNam\t\t");
	}
	else {
		printf("\t\tNu\t\t");
	}
	InNgayThang(nv.NamSinh);
}

void NhapSoPhanTu(int& n) {
	do {
		printf("\nNhap so ptu trong mang (n>0):");
		scanf("%d", &n);
	} while (n <= 0);
}

void NhapMangNhanVien(NhanVien sv[size], int n) {
	for (int i = 0; i < n; i++) {
		printf("\nNhap thong tin nhan vien %d\n", i);
		NhapNhanVien(sv[i]);
	}
}

void InMangNhanvien(NhanVien nv[size], int n) {
	for (int i = 0; i < n; i++) {
		printf("\nThong tin nhan vien %d\n", i);
		InNhanVien(nv[i]);
	}
}

void InNhanVienTheoNam(NhanVien nv[size], int n, int NSinh) {
	printf("Nhan vien > 25t", NSinh);
	//printf("\nMa\tTen\tDOB");
	for (int i = 0; i < n; i++) {
		if (nv[i].NamSinh.Nam > NSinh) {
			InNhanVien(nv[i]);
		}
	}
}

void InNhanVienTheoLuong(NhanVien nv[size], int n, int Lng) {
	printf("Nhan vien co luong > 10t", Lng);
	//printf("\nMa\tTen\tDOB");
	for (int i = 0; i < n; i++) {
		if (nv[i].Luong > Lng ) {
			InNhanVien(nv[i]);
		}
	}
}



void main() {
	NhanVien nv[size];
	int n = 5;
	//NhapSoPhanTu(n);
	
	/*NhapNhanVien(nv);
	InNhanVien(nv);*/

	nv[0] = { 123,"Thi",{1,1,1999},1,1000.2 };
	nv[1] = { 124,"He",{1,2,1993},0,1200 };
	nv[2] = { 23,"Hien",{5,6,1999},0,30000 };
	nv[3] = { 24,"Ti",{5,6,2010},1,3000 };
	nv[4] = { 25,"Inh",{5,6,1995},0,30000 };

	//NhapMangNhanVien(nv, n);
	InMangNhanvien(nv, n);
	printf("\n---------------------------\n");
	InNhanVienTheoNam(nv,n,1996);
	printf("\n---------------------------\n");
	InNhanVienTheoLuong(nv, n, 10000);
}