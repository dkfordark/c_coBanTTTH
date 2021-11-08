#include<stdio.h>

void main() {
	int n = 4;
	//for (int dong = 0; dong < n; dong++) {
	//	for (int cot = 0; cot < n; cot++) {
	//		if (dong <= cot) {
	//			printf("*\t");
	//		}
	//		else printf("\t");
	//	}
	//	printf("\n");
	//}

	//for (int dong = 0; dong < n; dong++) {
	//	for (int cot = 0; cot < n; cot++) {
	//		if (dong >= cot) {
	//			printf("*\t");
	//		}
	//		else printf("\t");
	//	}
	//	printf("\n");
	//}

	/*for (int dong = 0; dong < n; dong++) {
		for (int cot = 0; cot < n; cot++) {
			if (dong + cot<=n-1) {
				printf("*\t");
			}
			else printf("\t");
		}
		printf("\n");
	}*/

	//for (int dong = 0; dong < n; dong++) {
	//	for (int cot = 0; cot < n; cot++) {
	//		if (dong + cot >= n - 1) {
	//			printf("C%d*\t",cot);
	//		}
	//		else printf("\t");
	//	}
	//	printf("\n");
	//}

	/*for (int dong = 0; dong < n; dong++) {
		for (int cot = 0; cot < n; cot++) {
			if (cot==0 || dong==0 || cot==n-1 || dong==n-1) {
				printf("*\t");
			}
			else printf("\t");
		}
		printf("\n");
	}*/

	for (int dong = 0; dong < n; dong++) {
		for (int cot = 0; cot < n; cot++) {
			if (cot==0 || dong==0 || cot==n-1 || dong==n-1) {
				printf("*\t");
			}
			else printf("\t");
		}
		printf("\n");
	}

}