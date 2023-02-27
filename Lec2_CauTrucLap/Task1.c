#include <stdio.h>
#include <math.h>
void nhap_duong(int *n){
	do{
		printf("Nhap so nguyen duong: ");
		scanf("%d", n);
		if(*n <= 0)
			printf("Gia tri khong hop le\n");	
	}while(*n <= 0);
}

void nhap_nguyen(int *n, char c){
	printf("%c = ", c);
	scanf("%d", n);
}

void nhap_thuc(double *n, char c){
	printf("%c = ", c);
	scanf("%lf", n);
}

void bai_toan_1(int n){
	int res = 1;
	for(int i = 1; i <= n; i++)
		res *= i;
	printf("Giai thua cua %d = %d\n", n, res);
}

void bai_toan_2(int n){
	double res = 0;
	if(n % 2 == 0){
		for(int i = 0; i <= n; i++)
			res += 1/pow(1, i);
	}else
		res = sqrt(n * n + 1);
	printf("Gia tri cua bieu thuc = %.2lf\n", res);
}

void bai_toan_3(double x, int n){
	double res = 0;
	if(n%2 == 0){
		for(int i = 1; i <= n; i++)
			res += pow(x, i) / pow(3, i - 1);
	}else
		res = 0;
	printf("Gia tri cua bieu thuc = %.2lf\n", res);
}

void bai_toan_4(int n){
	int t = n;
	int rev = 0;
	while(n){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	printf("Gia tri dao nguoc cua %d = %d\n", t, rev);
}

int nt(int n){
	for(int i = 2; i * i <= n; i++)
		if(n % i == 0)
			return 0;
	return n > 1;
}

void bai_toan_5(int n){
	printf("Cac so nguyen to nho hon %d \n", n);
	for(int i = 0; i < n; i++){
		if(nt(i))
			printf("%d ", i);
	}
}

void bai_toan_6(int n){
	int can = sqrt(n);
	if(can * can == n)
		printf("%d la so chinh phuong", n);
	else
		printf("%d khong phai so chinh phuong", n);
	printf("\n");
}

void menu(){
	printf("\t\t\tTHUC HANH 2\n");
	printf("Chon 1 trong cac lua chon sau\n");
	printf("1. Bai toan 1 - Tinh giai thua\n");
	printf("2. Bai toan 2 - Tinh bieu thuc\n");
	printf("3. Bai toan 3 - Tinh bieu thuc\n");
	printf("4. Bai toan 4 - In so dao nguoc\n");
	printf("5. Bai toan 5 - In so nguyen to\n");
	printf("6. Bai toan 6 - Kiem tra chinh phuong\n");
	printf("0. Thoat chuong trinh\n");
}
int main(){
	
	int lc;
	while(1){
		system("cls");
		menu();
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &lc);
		switch(lc){
			case 1:
				printf("Bai toan 1 - Tinh giai thua\n");
				int n1;
				nhap_duong(&n1);
				bai_toan_1(n1);
				 
				break;
			case 2:
				printf("Bai toan 2 - Tinh bieu thuc\n");
				int n2;
				nhap_nguyen(&n2, 'n');
				bai_toan_2(n2);
				 
				break;
			case 3:
				printf("Bai toan 3 - Tinh bieu thuc\n");
				double x3; int n3;
				nhap_thuc(&x3, 'x');
				nhap_duong(&n3);
				bai_toan_3(x3, n3);
				 
				break;
			case 4:
				printf("Bai toan 4 - In so dao nguoc\n");
				int n4;
				nhap_duong(&n4);
				bai_toan_4(n4);
				 
				break;
			case 5:
				printf("Bai toan 5 - In so nguyen to\n");
				int n5;
				nhap_nguyen(&n5, 'n');
				bai_toan_5(n5);
				 
				break;
			case 6:
				printf("Bai toan 6 - Kiem tra chinh phuong\n");
				int n6;
				nhap_duong(&n6);
				bai_toan_6(n6);
				 
				break;
			case 0:
				printf("Ket thuc chuong trinh");
				return 0;
			default: 
				printf("Lua chon khong hop le");
		}
		system("pause");
	}
}