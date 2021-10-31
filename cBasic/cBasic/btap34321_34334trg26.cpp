# include <stdio.h>

void main() {
	// 3.4.3.2.1
	//unsigned int n;
	//printf("Vui long nhap 1 so nguyen duong > 0: ");
	//scanf("%d", &n);
	//
	//for (int i = 1; i <= 10; i++) {
	//	printf("%d x %d = %d\n", n, i, n * i);
	//}

	// 3.4.3.2.2
	/*
	for (int j = 2; j <= 9; j++) {
		for (int i = 1; i <= 10; i++) {
			printf("%d x %d = %d\n", j, i, j * i);
		}
	}*/
	
	// 3.4.3.3.1
	//for (int i = 33; i <= 127; i++) {
	//	printf("So thu tu ma:%2d \t Ky tu tuong ung:%2c\n", i, (char)i);
	//}

	// 3.4.3.3.2
	//for (int i = 33; i <= 127; i++) {
	//	for (int j = 0; j < 8 and i<=127; j++) {
	//		printf("Num:%d_Sym:%c\t", i, (char)i);
	//		i++;
	//	}
	//	printf("\n");
	//}

	// 3.4.3.3.3
	/*char kt;
	printf("Vui long nhap vao mot ky tu: ");
	scanf("%c", &kt);

	if ((int)kt >= 97 and (int)kt <= 122) {
		printf("day la chu cai thuong\n");
		printf("Ma cua ky tu: %d", (int)kt);
		printf("\nvi tri %d trong 26 chu cai", (int)kt - 97 + 1);
	}*/

	// 3.4.3.3.4
	//unsigned int n;
	//do {
	//	printf("Moi nhap so nguyen n: ");
	//	scanf("%u", &n);
	//	if (!(n < 0 or n>255)) {
	//		printf("Ky tu ASCII cua %u vua nhap la: %c\n", n, (char)n);
	//	}
	//} while (!(n < 0 or n>255));
}