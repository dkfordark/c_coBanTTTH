#include <stdio.h>

unsigned int nhapso() {
	unsigned int n;
	do {
		printf("moi nhap so nguyen duong > 0: ");
		scanf("%u", &n);
	} while (n <= 0);
	return (n);
}

// 3.4.3.7.1
//void main() {
//	unsigned int n, tong=0;
//	n = nhapso();
//
//	for (int i = 1; i <= n; i++) {
//		tong += i;
//		printf("%u", i);
//		if (i < n) {
//			printf("+");
//		}
//	}
//	printf("=%u",tong);
//}


// 3.4.3.7.2
//void main() {
//	unsigned int n, tong=0;
//	n = nhapso();
//
//	for (int i = 1; i <= 2*n+1; i+=2) {
//		tong += i;
//		printf("%u", i);
//		if (i < 2*n+1) {
//			printf("+");
//		}
//	}
//	printf("=%u",tong);
//}

// 3.4.3.7.3
//void main() {
//	unsigned int n; 
//	float tong = 0;
//	n = nhapso();
//
//	printf("S=");
//	for (int i = 1; i <= n; i++) {
//		
//		tong += 1.0/i;
//		
//		if (i == 1) {
//			printf("%u", i);
//		}
//		else {
//			printf("1/%u", i);
//		}
//
//		if (i < n) {
//			printf("+");
//		}
//	}
//	printf("=%f",tong);
//}

// 3.4.3.7.4
//void main() {
//	unsigned int n;
//	float tong = 0;
//	n = nhapso();
//
//	printf("S=");
//	for (int i = 1; i <= n; i++) {
//
//		tong += 1.0 / (i+1);
//		
//		printf("1/%u", i+1);
//
//		if (i < n) {
//			printf("+");
//		}
//	}
//	printf("=%f", tong);
//}

// 3.4.3.7.5
//void main() {
//	unsigned int n;
//	float tong = 0;
//	n = nhapso();
//
//	printf("S=");
//	for (int i = 1; i <= n; i++) {
//
//		tong += 1.0 / (2*i);
//
//		printf("1/%u", 2*i);
//
//		if (i < n) {
//			printf("+");
//		}
//	}
//	printf("=%f", tong);
//}

// 3.4.3.7.6
//void main() {
//	unsigned int n;
//	float tong = 0;
//	n = nhapso();
//
//	printf("S=");
//	for (int i = 1; i <= n; i++) {
//
//		tong += 1.0 / (2 * i - 1);
//
//		printf("1/%u", 2 * i - 1);
//
//		if (i < n) {
//			printf("+");
//		}
//	}
//	printf("=%f", tong);
//}

// 3.4.3.7.7
//void main() {
//	unsigned int n;
//	float tong = 0;
//	n = nhapso();
//
//	printf("S=");
//	for (float i = 1; i <= n; i++) {
//
//		tong += i / (i + 1);
//
//		printf("%.2f/%.2f",i,i + 1);
//
//		if (i < n) {
//			printf("+");
//		}
//	}
//	printf("=%.2f", tong);
//}

// 3.4.3.7.8
//void main() {
//	unsigned int n;
//	float tong = 0;
//	n = nhapso();
//
//	printf("S=");
//	for (float i = 0; i < n; i++) {
//
//		tong += (2*i+1) / (2*i+2);
//
//		printf("%.0f/%.0f", 2*i+1, 2*i+2);
//
//		if (i < n-1) {
//			printf("+");
//		}
//	}
//	printf("=%.2f", tong);
//}

// 3.4.3.7.10
//void main() {
//	unsigned int n, tich = 1;
//	n = nhapso();
//
//	printf("P=");
//	for (int i = 1; i <= n; i++) {
//
//		tich *= 2*i-1;
//
//		printf("%u",2*i-1);
//
//		if (i < n) {
//			printf("x");
//		}
//	}
//	printf("=%u", tich);
//}

// 3.4.3.7.9
//void main() {
//	unsigned int n, tich = 1;
//	n = nhapso();
//
//	printf("P=");
//	for (int i = 1; i <= n; i++) {
//
//		tich *= i;
//
//		printf("%u", i);
//
//		if (i < n) {
//			printf("x");
//		}
//	}
//	printf("=%u", tich);
//}


// 3.4.3.7.11
//void main() {
//	unsigned int n, k, temp=1;
//	k = nhapso();
//	n = nhapso();
//	
//	temp = k;
//
//	printf("P=%u^%u",k,n);
//	for (int i = 1; i < n; i++) {
//		k *= temp;
//	}
//	printf("=%u", k);
//}

// 3.4.3.7.12
//void main() {
//	unsigned int n, t1=0, t2=0;
//	int i = 0;
//	n = nhapso();
//
//	printf("S=");
//	for (i = 1; i <= n; i++) {
//		t1 += i;
//		t2 += t1;
//		printf("%d", t1);
//		if (i < n) {
//			printf("+");
//		}
//	}
//	printf("=%d", t2);
//}

// 3.4.3.7.13
//void main() {
//	unsigned int n, tich = 1, t2 = 0;
//	int i = 0;
//	n = nhapso();
//
//	printf("S=");
//	for (i = 1; i <= n; i++) {
//		tich *= i;
//		t2 += tich;
//		printf("%d", tich);
//		if (i < n) {
//			printf("+");
//		}
//	}
//	printf("=%d", t2);
//}

// 3.4.3.7.14
//void main() {
//	unsigned int n, t1=0;
//	float t1b = 0, t2 = 0;
//	int i = 0;
//	n = nhapso();
//
//	printf("S=");
//	for (i = 1; i <= n; i++) {
//		t1 += i;
//		t1b = 1.0 / t1;
//		t2 += t1b;
//		printf("1/%d", t1);
//		if (i < n) {
//			printf("+");
//		}
//	}
//	printf("=%.2f", t2);
//}