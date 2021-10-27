# include <stdio.h>

void main() {
	int n = 6, tong = 0;
	
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			printf("Uoc so: %d\n", i);
			tong += i;
		}
	}

	printf("Tong la: %d\n", tong);
	if (tong == n) {
		printf("Day la so hoan thien");
	} 
	else {
		printf("day la so ko hoan thien");
	}
}