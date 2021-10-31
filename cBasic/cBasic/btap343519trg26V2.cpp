#include<stdio.h>
#include<math.h>

// 3.4.3.5.19

int nhapso() {
	unsigned int n;
	printf("moi nhap so nguyen duong co k chu so (0 < k <= 5): ");
	scanf("%u", &n);
	return n;
}

int ktraSo(unsigned int n) {
	unsigned int c = 0;
	while (n > 0) {
		n /= 10;
		c += 1;
	}
	return (c);
}

void main() {
	//
	unsigned int n, a = 0;
	n = nhapso();
	a = ktraSo(n);

	for (int i = a; i > 0; i--) {

	}

}