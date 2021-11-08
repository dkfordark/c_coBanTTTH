#include<stdio.h>

#define size 10

void ktraNhonhat(int mang[size]) {
	int vitri = 0;
	for (int i = 0; i < size-1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (mang[i] > mang[j]) {
				vitri = j; 
				//break;
			}
		}
	}
	printf("--------%d", vitri);
}

void main() {
	int mang[size] = { 0,10,2,1,4,5,11,7,8,9 };
	ktraNhonhat(mang);

}