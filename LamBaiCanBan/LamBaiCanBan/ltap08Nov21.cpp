#include<stdio.h>

#define size 10

void main() {
	int n = 4;
	int mang[size][size];
	int dem = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			dem += 1;
			mang[i][j] = dem;
		}
	}

	for (int dong = 0; dong < (n-1)*2; dong++) {
		for (int cot = 0; cot < (n - 1) * 2; cot++) {
			if (dong + cot == (n - 1) * 2) {
				printf("%d\t", mang[dong][cot]);
			}
			else {
				printf("\t");
			}
		}
		printf("\n");
	}
}