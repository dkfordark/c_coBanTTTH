#include<stdio.h>
#define size 10

void nhapGiaTriXY(int &n, int &m) {

	do {
		printf("\nGia tri x < y");
		printf("\nMoi nhap gia tri [x,y]:");
		scanf("%d%d", &n, &m);
	} while (n >= m);
	
}

void xuatmangXY(int a[size],int& n, int& m) {
	printf("x:%d\ty:%d\n", n, m);
	for (int i = n; i < m; i++) {
		if (i == n) {
			printf("Mang tu %d den %d: ", n, m);
		}
		printf("%d ", a[i]);
	}
}

void main() {
	int n, m;
	int a[size] = { 1,2,3,4,5,6,55,22,44,88 };
	printf("Mang cho truoc: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	nhapGiaTriXY(n,m);
	xuatmangXY(a, n, m);
}