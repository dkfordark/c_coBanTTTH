#include <stdio.h>

int ktra(int n) {
	unsigned int c = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			c = 1; break;
		}
	}
	return c;
}
void ktra2(int n) {
	unsigned int c = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			c = 1; break;
		}
	}

	if (c == 0) {
		printf("%u la so nguyen to", n);
	}
	else
	{
		printf("%u ko phai la so nguyen to", n);
	}
}


void main() {
	unsigned int n;
	printf("Moi nhap so nguyen duong: ");
	scanf("%u", &n);
	
	//if (ktra(n) == 0) {
	//	printf("%u la so nguyen to", n);
	//}
	//else
	//{
	//	printf("%u ko phai la so nguyen to", n);
	//}

	ktra2(n);
		
}