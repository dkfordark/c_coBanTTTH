#include<stdio.h>
#define size 10

void xuatmang(int mang[size]) {
	for (int i = 0; i < size; i++) {
		printf("%d ", mang[i]);
	}
	printf("\n");
}

void timvitridau(int mang[size], int x) {
	int vitri = 0, dem = 0;
	for (int i = 0; i < size; i++) {
		if (mang[i] == x) {
			vitri = i;
			dem = 1;
			break;
		}
	}

	if (dem == 0) {
		printf("<-1> mang ko chua gia tri %d", x);
	}
	else {
		printf("%d o vi tri %d trong mang",x,vitri+1);
	}
}

void timvitricuoi(int mang[size], int x) {
	int vitri = 0, dem = 0;
	for (int i = size; i > 0; i--) {
		if (mang[i] == x) {
			vitri = i;
			dem = 1;
			break;
		}
	}
	if (dem == 0) {
		printf("<-1> mang ko chua gia tri %d", x);
	}
	else {
		printf("%d o vi tri thu %d trong mang", x, vitri + 1);
	}
}

void timvitridaucuoinho(int mang[size], int x) {
	int vitridau = 0, demdau = 0;
	for (int i = 0; i < size; i++) {
		if (mang[i] < x) {
			vitridau = i;
			demdau = 1;
			break;
		}
	}

	int vitricuoi = 0, demcuoi = 0, j=0;
	for (j = size-1; j >=0; j--) {
		if (mang[j] < x) {
			vitricuoi = j;
			//printf("\n%d\t%d", vitricuoi,mang[j]);
			demcuoi = 1;
			break;
		}
	}
	
	if (demcuoi == 0 && demdau == 0) {
		printf("mang ko chua so can tim");
	}
	else {
		if (vitridau == vitricuoi) {
			printf("\n%d nam o giua mang co vi tri %d", x, vitridau);
		}
		else {
			printf("\nvi tri dau tien chua gia tri < %d trong mang : %d", x, vitridau);
			printf("\nvi tri cuoi cung chua gia tri < %d trong mang : %d", x, vitricuoi);
		}
	}

	
	
}

void main() {
	int mang[size] = { 1,1,3,4,5,6,7,1,9,10 };
	int x = 2;
	xuatmang(mang);
	//timvitridau(mang,x);
	//timvitricuoi(mang, x);
	timvitridaucuoinho(mang, x);
}