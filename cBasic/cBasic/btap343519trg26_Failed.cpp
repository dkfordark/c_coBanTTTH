#include<stdio.h>
#include<math.h>

// 3.4.3.5.19

int nhapso() {
	unsigned int n;
	printf("moi nhap so nguyen duong co k chu so (0 < k <= 5): ");
	scanf("%u", &n);
	return n;
}

int soNhoNhat(unsigned int n) {
	// tra ve so nn ben trai
	unsigned int c = 0;
	unsigned int sn = n % 10;
	while (n > 0) {
		unsigned int a = n % 10;
		if (sn > a) {
			sn = a;
		}
		n /= 10;
		c += 1;
	}
	unsigned int d = pow(10, c - 1);
	return (c);
}

void main() {
	//
	unsigned int n, s=0, sNN=0, a=0;
	n = nhapso();
	sNN = soNhoNhat(n);
	printf("%u\n",sNN);
	s = n / sNN;
	printf("%u\n", s);


	//n %= sNN;
	//printf("\n%u", n);

	//sNN = soNhoNhat(n);
	//printf("\n%u", sNN);
	//n %= sNN;
	//printf("\n%u", n);
}