// 3.4.3.6.9trg27
#include<stdio.h>

int timUSCLN(unsigned int a, unsigned int b) {
	unsigned int x = a;
	unsigned int y = b;

	while (x != y) 
	{
		if (x > y) {
			x = x - y;
			//printf("%d\n", x);
		}
		else {
			y = y - x;
			//printf("%d\n", y);
		}
	}
	return x;
}

int nhapso() {
	unsigned int n;
	do {
		printf("moi nhap so nguyen duong > 0: ");
		scanf("%u", &n);
	} while (n <= 0);
	return (n);
}

void main() {
	unsigned int a, b, c;
	a = nhapso();
	b = nhapso();
	c = timUSCLN(a, b);
	printf("USCLN cua %u va %u : %u", a, b, c);
}