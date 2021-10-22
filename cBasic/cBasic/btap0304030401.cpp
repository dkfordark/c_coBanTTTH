# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void main() {
	// 3.4.3.4.1
	// a
	unsigned int n;
	do {
		printf("vui long nhap 1 so nguyen duong: ");
		scanf("%d", &n);
	} while (!(n>0));

	printf("So chan nho hon %d la: ", n);
	for (int i=0; i < n; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}

	// b
	if (n >= 0 and n <= 9) {
		printf("\ncach doc: ");
		switch (n) {
		case 0: printf("Khong"); break;
		case 1: printf("Mot"); break;
		case 2: printf("Hai"); break;
		case 3: printf("Ba"); break;
		case 4: printf("Tu"); break;
		case 5: printf("Nam"); break;
		case 6: printf("Sau"); break;
		case 7: printf("Bay"); break;
		case 8: printf("Tam"); break;
		case 9: printf("Chin"); break;
		}
	}

	// c
	printf("\nso ngau nhien: ");
	srand(unsigned int(time(NULL)));
	if (n < 10 or n>50) {
		for (int i = 0; i < n; i++) {
			int x = rand() % 20;
			printf("\n%d", x);
		}
	} 
	else 
	{
		printf("so nhap khong thoa dieu kien");
	}

	// d
	printf("\nbang cuu chuong 5");
	if (n % 5 == 0) {
		for (int m = 0; m <= 10; m++) {
			printf("\n%d x %d = %d", m, 5, m * 5);
		}
	}


}