// 3.4.3.6.5
#include<stdio.h>
#include<math.h>

int nhapso() {
	unsigned int n;
	do {
		printf("moi nhap so nguyen duong: ");
		scanf("%u", &n);
	} while (n <= 0);
	return (n);
}

void main() {
	int n;
	n = nhapso();

	for (int i = n/2; i > 0; i--) {
		if (n % i == 0) {
			printf("uoc so le gan nhat: %d", i);
			break;
		}
	}
}