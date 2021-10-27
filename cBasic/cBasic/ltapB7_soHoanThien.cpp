# include <stdio.h>

int ktraSHT(unsigned int n) {
	unsigned int t = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			t += i;
		}
	}
	if (t == n) {
		return 1; // so hoan thien
	}
	else {
		return 2; // so ko hoan thien
	}
}

void ktra2SHT(unsigned int n) {
	unsigned int t = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			t += i;
		}
	}
	if (t == n) {
		printf("%u la so hoan thien", n);
	}
	else {
		printf("%u la so ko hoan thien", n);
	}
}

void main() {
	unsigned int n;
	printf("vui long nhap so nguyen duong: ");
	scanf("%u", &n);

	//if (ktraSHT(n) == 1) {
	//	printf("%u la so hoan thien", n);
	//}
	//else {
	//	printf("%u la so ko hoan thien", n);
	//}

	ktra2SHT(n);

}