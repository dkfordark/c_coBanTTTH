#include <stdio.h>

void main() {

	// 3.4.2.19
	//float t, ls=0;
	//int tg;
	//printf("Moi nhap tien goi: ");
	//scanf("%f",&t);
	//printf("Moi nhap tgian gui 1,2,3,4,5...: ");
	//scanf("%d", &tg);

	//switch (tg) {
	//case 1: ls = 0.75; break;
	//case 2: ls = 0.75; break;
	//case 3: ls = 0.75; break;
	//case 4: ls = 0.75; break;
	//default: ls = 0.95; break;
	//}
	//printf("so tien nhan duoc: %.2f", ls * t + t);

	//3.4.2.20
	//float a, at, t=0;
	////float t = 0;
	//printf("Moi nhap so KM da di: ");
	//scanf("%f", &a);
	//
	//if (a <= 1)
	//{
	//	t += a * 5000; 
	//}
	//else if (a > 1 and a <= 30)
	//{
	//	a -= 1;
	//	t += 5000;
	//	t += a / 0.2 * 1000;
	//}
	//else if (a > 30)
	//{
	//	at = a - 30;
	//	t = at * 3000;
	//	//a -= at - 1;
	//	t += 5000 + 29 / 0.2 * 1000;
	//}
	//printf("so tien phai tra: %.2f", t);
	
	// 3.4.2.18
	/*int t, l, h;
	float dtb;
	printf("vui long nhap diem Toan, Ly, Hoa: ");
	scanf("%d%d%d", &t, &l, &h);
	dtb = (t * 3 + (l + h) * 2) / 7;
	if (dtb >= 9)
		printf("Xuat sac");
	else if (dtb >= 8)
		printf("Gioi");
	else if (dtb >= 7)
		printf("Kha");
	else if (dtb >= 6)
		printf("TB kha");
	else if (dtb >= 5)
		printf("Trung binh");
	else
		printf("Yeu");*/

	// 3.4.2.17
	//int n, t1, t2, m1, m2;
	//printf("vui long nhap vao so nguyen 3 chu so: ");
	//scanf("%d", &n);
	//t1 = n / 100;
	//n %= 100;
	//t2 = n / 10;
	//n %= 10;
	//// so sanh
	//m1 = (t1 > t2) ? t1 : t2;
	//m2 = (m1 > n) ? m1 : n;
	//// output
	//printf("So lon nhat: %d", m2);

	// 3.4.2.16
	//int c, t;
	//printf("Moi chon cau hoi (1-3): ");
	//scanf("%d", &c);

	//switch (c)
	//{
	//case 1:
	//	printf("cau hoi 1");
	//	printf("\ncon chuot co may chan?");
	//	printf("\n1. 1 chan");
	//	printf("\n2. 2 chan");
	//	printf("\n3. 3 chan");
	//	printf("\n4. 4 chan");
	//	printf("\nMoi chon cau tra loi (1-4):");
	//	scanf("%d", &t);
	//	switch (t)
	//	{
	//	case 1: printf("Sai"); break;
	//	case 2: printf("Sai"); break;
	//	case 3: printf("Sai"); break;
	//	case 4: printf("Tra loi dung"); break;
	//	default: printf("sai lua chon"); break;
	//	}
	//	break;
	//case 2:
	//	printf("cau hoi 2");
	//	printf("\ncon voi co may chan?");
	//	printf("\n1. 1 chan");
	//	printf("\n2. 2 chan");
	//	printf("\n3. 3 chan");
	//	printf("\n4. 4 chan");
	//	printf("\nMoi chon cau tra loi (1-4):");
	//	scanf("%d", &t);
	//	switch (t)
	//	{
	//	case 1: printf("Sai"); break;
	//	case 2: printf("Sai"); break;
	//	case 3: printf("Sai"); break;
	//	case 4: printf("Tra loi dung"); break;
	//	default: printf("sai lua chon"); break;
	//	}
	//	break;
	//case 3:
	//	printf("cau hoi 3");
	//	printf("\nCa map co may chan?");
	//	printf("\n1. 1 chan");
	//	printf("\n2. 2 chan");
	//	printf("\n3. 3 chan");
	//	printf("\n4. 0 chan");
	//	printf("\nMoi chon cau tra loi (1-4):");
	//	scanf("%d", &t);
	//	switch (t)
	//	{
	//	case 1: printf("Sai"); break;
	//	case 2: printf("Sai"); break;
	//	case 3: printf("Sai"); break;
	//	case 4: printf("Tra loi dung"); break;
	//	default: printf("sai lua chon"); break;
	//	}
	//	break;
	//}
	//printf("\nhen gap lai");
	
	// 3.4.2.15
	//int a, b, c;
	//printf("moi nhap 2 so: ");
	//scanf("%d%d", &a, &b);
	//printf("moi chon phep tinh:\t1.+\t2.-\t3.x\t4./");
	//scanf("%d", &c);
	//switch (c)
	//{
	//case 1: printf("Dap an: %d", a + b); break;
	//case 2: printf("Dap an: %d", a - b); break;
	//case 3: printf("Dap an: %d", a * b); break;
	//case 4: printf("Dap an: %d", a / b); break;
	//}

	//int r, c;
	//float dt, cv;
	//printf("moi nhap ban kinh hinh tron: ");
	//scanf("%d", &r);
	//printf("moi chon:\t1.tinh dien tich\t2.tinh chu vi\t:");
	//scanf("%d", &c);
	//switch (c)
	//{
	//case 1: 
	//	dt = r * r * 3.14;
	//	printf("Dien tich hinh tron: %.2f",dt); 
	//	break;
	//case 2: 
	//	cv = 2 * r * 3.14;
	//	printf("Chu vi hinh tron: %.2f",cv); 
	//	break;
	//}
}