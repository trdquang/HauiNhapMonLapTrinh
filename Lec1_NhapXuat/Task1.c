#include <stdio.h>
#include <conio.h>
#include <math.h>

void nhap_nguyen(int * n, char c){
	printf("%c = ", c);
	scanf ("%d", n);
}

void nhap_thuc(float * n, char c){
	printf("%c = ", c);
	scanf ("%f", n);
}

void bai_toan_1(int a, int b){
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	
	if(b == 0)
		printf("Err div 0\n");
	else
		printf("%d / %d = %.2f\n", a, b, (float)a / b);
}

void bai_toan_2(float x){
	float kq = (x * x + (float)exp(x) + 
		(float)pow(sin(x * M_PI/180), 2))/(sqrt(x * x + 1));
	printf("Ket qua cua biet thuc = %.2f\n", kq);
}

void bai_toan_3(float x){
	float km = 0;
	if(x >= 200000 && x <= 300000)
		km = x * .2;
	else if(x > 300000)
		km = x * .3;
	
	printf("So tien phai tra cua khach = %.2f\n", x - km);
}

void bai_toan_4(float x){
	if(x >= 8 && x <= 10)
		printf("Gioi");
	else if(x >= 7 && x < 8)
		printf("Kha");
	else if(x >= 5 && x < 7)
		printf("Trung binh");
	else
		printf("Kem");
	printf("\n");
}

void bai_toan_5(float a, float b){
	if(a == 0){
		if(b == 0)
			printf("Phuong trinh vo so nghiem");
		else if(b != 0)
			printf("Phuong trinh vo nghiem");
	}else
		printf("Nghiem cua phuong trinh la %.2f", -b/a);
	printf("\n");
}

void bai_toan_6(int m){
	if(m == 2)
		printf("Thang %d co 28 hoac 29 ngay", m);
	else{
		if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8
			|| m == 10 || m == 12)
			printf("Thang %d co 31 ngay", m);
		else
			printf("Thang %d co 30 ngay", m);
	}
	printf("\n");
}

void menu(){
	printf("\t\t\tTHUC HANH 1\n");
	printf("Chon cac lua chon sau");
	printf("1. Bai toan 1 - Cong tru nhan chia\n");
	printf("2. Bai toan 2 - Tinh bieu thuc\n");
	printf("3. Bai toan 3 - So tien khuyen mai\n");
	printf("4. Bai toan 4 - Xep loai hoc sinh\n");
	printf("5. Bai toan 5 - Giai phuong trinh\n");
	printf("6. Bai toan 6 - So ngay trong thang\n");
	printf("0. Thoat chuong trinh\n");
}
int main(){
	int lc;
	while(1){
		system("cls");
		menu();
		printf("Moi nhap lua chon: ");
		scanf("%d", &lc);
		switch (lc){
			case 1:
				printf("Bai toan 1\n");
				int a, b;
				nhap_nguyen(&a, 'a');
				nhap_nguyen(&b, 'b');
				bai_toan_1(a, b);
				break;
			case 2:
				printf("Bai toan 2\n");
				float x;
				nhap_thuc(&x, 'x');
				bai_toan_2(x);
				break;
			case 3:
				printf("Bai toan 3\n");
				float y;
				nhap_thuc(&y, 'y');
				bai_toan_3(y);
				break;
			case 4:
				printf("Bai toan 4\n");
				float z;
				nhap_thuc(&z, 'z');
				bai_toan_4(z);
				break;
			case 5:
				printf("Bai toan 5\n");
				float a1, b1;
				nhap_thuc(&a1, 'a');
				nhap_thuc(&b1, 'b');
				bai_toan_5(a1, b1);
				break;
			case 6:
				printf("Bai toan 6\n");
				int m;
				nhap_nguyen(&m, 'm');
				bai_toan_6(m);
				break;
			case 0:
				printf("Thoat chuong trinh\n");
				return 0;
			default:
				printf("Lua chon khong hop le\n");
		}
		system("pause");
	}
}

