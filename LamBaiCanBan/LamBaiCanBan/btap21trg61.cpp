#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10

void xuatMang(int a[size]) {
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
}

//void taoMang(int a[size]) {
//	for (int i = 0; i < size; i++) {
//		a[i] = (rand() % 50 + 1) * 2 + 1;
//	}
//	xuatMang(a);
//}

//void taoMangLe(int a[size]) {
//	for (int i = 0; i < size; i++) {
//		a[i] = (rand()%50+1) * 2 + 1;
//	}
//	xuatMang(a);
//}
//
//void taoMangChan(int a[size]) {
//	for (int i = 0; i < size; i++) {
//		a[i] = (rand() % 50 + 1) * 2;
//	}
//	xuatMang(a);
//}


void taoMangA(int a[size]) {
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 50 + 1;
	}
	printf("Mang duoc tao: ");
	xuatMang(a);

	printf("\nCac so le trong mang duoc tao: ");
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 == 1) {
			printf("%d ", a[i]);
		}
	}

	printf("\nCac so chan trong mang duoc tao: ");
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 == 0) {
			printf("%d ", a[i]);
		}
	}
}

void taoMangB(int a[size]) {
	int dau = 0;
	for (int i = 0; i < size; i++) {
		int x = rand();
		if (x % 2 == 1) {
			dau = 1;
		}
		else {
			dau = -1;
		}
		a[i] = dau * (rand() % 50 + 1);
	}
	printf("Mang duoc tao: ");
	xuatMang(a);

	printf("\nCac so duong trong mang duoc tao: ");
	for (int i = 0; i < size; i++) {
		if (a[i] >= 0) {
			printf("%d ", a[i]);
		}
	}

	printf("\nCac so am trong mang duoc tao: ");
	for (int i = 0; i < size; i++) {
		if (a[i] < 0) {
			printf("%d ", a[i]);
		}
	}
}

void taoMangC() {
	for (int dong = 0; dong < 3; dong++) {
		for (int cot = 0; cot < 7; cot++) {
			if (dong == 0 && (cot == 0 || cot == 1)) {
				printf("*");
			}

			if (dong == 1) {
				printf("*");
			}

			if (dong == 2 && cot < 4) {
				printf("*");
			}
		}
		printf("\n");
	}
}

void taoMangD() {
	for (int dong = 0; dong < 4; dong++) {
		for (int cot = 0; cot < 4; cot++) {
			if (cot == 0 and dong > 1) {
				printf("*\t");
			}

			else if (cot == 2) {
				printf("*\t");
			}

			else if (dong == 3 && cot == 3) {
				printf("*\t");
			}

			else {
				printf("\t");
			}
		}
		printf("\n");
	}
}

void main() {
	srand(unsigned int(time(NULL)));
	int a[size];
	// a1
	//taoMangA(a);
	//taoMangB(a);
	//taoMangC();

	taoMangD();
}