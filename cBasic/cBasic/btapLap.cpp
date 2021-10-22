# include <stdio.h>

void main() {
	// cau 3.4.3.1.1
	/*int x = 0;
	while (x < 30)
	{
		x++;
		printf("%5d", x);
	}*/

	// cau 3.4.3.1.2
	/*unsigned int n, c=1;
	printf("vui long nhap so nguyen duong: ");
	scanf("%u",&n);
	printf("cac so < %d: ",n);
	while (n > 0) {
		n--;
		printf("%d ", c++);
	}*/
	
	// cau 3.4.3.1.4
	/*unsigned int n, c = 1;
	printf("vui long nhap so nguyen duong: ");
	scanf("%u", &n);
	printf("cac so le <%u: ", n);
	while (c < n) {
		if (!(c % 2 == 0) and (c<n)) {
			printf("%u ", c);
		}
		c++;
	}*/

	// cau 3.4.3.1.5
	//int n,c=0;
	//printf("Moi nhap so: ");
	//scanf("%d", &n);
	//c += n;
	//while (n != 0) {
	//	printf("Moi nhap so: ");
	//	scanf("%d", &n);
	//	c += n;
	//}
	//printf("Tong cac so da nhap: %d", c);

	// cau 3.4.3.1.6
	//unsigned int n, c=0, i=0;
	//printf("moi nhap so nguyen duong : ");
	//scanf("%u", &n);
	//printf("Tong so nguyen can tim:\n");
	//while (i <= n) {
	//	//printf("i:%u\tc:%u", i, c); printf("\n");
	//	if (((c % 3 == 0) and (c % 5 == 0)) or ((c % 3 == 2) and (c % 5 == 3))) {
	//		printf("%u ", c);
	//	}
	//	i++;
	//	c += i;
	//}

	// cau 3.4.3.1.7
	//unsigned int a, i=1, c=1;
	//printf("moi nhap so nguyen duong: ");
	//scanf("%u", &a);
	//printf("tong cac so: ");
	//while (i < a) {
	//	printf("%u", i);
	//	i++;
	//	c += i;
	//	if (c > a) break;
	//	printf(" + ");
	//}
	//printf(" <= %u", a);

	// cau 3.4.3.1.8
	int n;
	printf("Vui long nhap so n: ");
	scanf("%d", &n);
	printf("Vui long nhap so bat dau a: ");
	scanf("%d,");

}