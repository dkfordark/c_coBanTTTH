# include <stdio.h>

void main() {
	// 3.4.3.5.3
	/*unsigned int n, s=0, chan=0, le=0;
	printf("vui long nhap so nguyen duong: ");
	scanf("%u", &n);
	while (n > 0) {
		s = n % 10;
		if (s % 2 == 0) {
			chan += 1;
		}
		else {
			le += 1;
		}
		n /= 10;
	}
	printf("chu so chan: %u so\n",chan);
	printf("chu so le: %u so", le);*/

	// 3.4.3.5.4 
	//unsigned int n, s=0, tongChan=0, tichChan=1, tongLe = 0, tichLe = 1;
	//printf("vui long nhap so nguyen duong: ");
	//scanf("%u", &n);
	//while (n > 0) {
	//	s = n % 10;
	//	if (s%2==0) {
	//		tongChan += s;
	//		tichChan *= s;
	//	}
	//	else {
	//		tongLe += s;
	//		tichLe *= s;
	//	}
	//	
	//	n /= 10;
	//}
	//printf("Tong cac chu so Chan: %u \n",tongChan);
	//printf("Tich cac chu so Chan: %u \n", tichChan);
	//printf("Tong cac chu so Le: %u \n", tongLe);
	//printf("Tich cac chu so Le: %u ", tichLe);

	// 3.4.3.5.6
	//unsigned int n, soMax = 0;
	//printf("Vui long nhap so nguyen duong: ");
	//scanf("%u", &n);
	//while (n > 0) {
	//	if (n % 10 > soMax) {
	//		soMax = n % 10;
	//	}
	//	n /= 10;
	//}
	//printf("Chu so max la:%d", soMax);

	// 3.4.3.5.7
	/*unsigned int n, soMin=0;
	printf("Vui long nhap so nguyen duong: ");
	scanf("%u", &n);
	soMin = n % 10;
	while (n > 0) {
		if (n % 10 < soMin) {
			soMin = n % 10;
		}
		n /= 10;
	}
	printf("Chu so min la:%d", soMin);*/

	// 3.4.3.5.8
	//unsigned int n, soMax = 0;
	//printf("Vui long nhap so nguyen duong: ");
	//scanf("%u", &n);
	//while (n > 0) {
	//	if (n % 10 > soMax) {
	//		soMax = n % 10;
	//	}
	//	n /= 10;
	//}
	//printf("Chu so max la:%d", soMax);


}