# include <stdio.h>
# include <math.h>

// 3.4.3.5.1
void main() {
	unsigned int n, tmp=0, tmp1=0, i=0, k=0;
	printf("vui long nhap so nguyen bat ky: ");
	scanf("%d", &n);
	tmp = n;

	while (tmp > 0) {
		k += 1;
		tmp /= 10;
	}

	tmp1 = pow(10, k-1);
	
	int sL = n / tmp1;
	printf("\nSo hang %d: %d", tmp1, sL);
	n %= tmp1;
	do {
		sL = n / (tmp1*=0.1);
		printf("\nSo hang %d: %d", tmp1, sL);
		n %= tmp1;
	} while (n > 0);
}
