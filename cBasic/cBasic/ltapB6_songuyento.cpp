# include <stdio.h>

void main() {
	unsigned int n, ktra=0;

	printf("moi nhap so nguyen n: ");
	scanf("%u", &n);

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			ktra += 1;
			break;
		}
	}

	if (n > 1 && ktra == 0) {
		printf("%u la so nto", n);
	}
	else {
		printf("%u ko phai la so nto",n);
	}
}