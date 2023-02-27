#include <stdio.h>
#include <stdlib.h>
void nhap(int *n, char c){	
	do{
		printf("Nhap so nguyen duong %c = ", c);
		scanf("%d", n);
		if(*n <= 0)
			printf("Gia tri nhap khong hop le\n");
	}while(*n <= 0);
}

int giai_thua(int n){
	int res = 1;
	for(int i = 1; i <= n; i++)
		res *= i;
	return res;
	
}

int bieu_thuc_2(int a, int b, int c){
	return giai_thua(a) + giai_thua(b) + giai_thua(c);
}
int main(){
	int a, b, c;
	nhap(&a, 'a');
	nhap(&b, 'b');
	nhap(&c, 'c');
	printf("%d! + %d! + %d! = %d\n",a, b, c, bieu_thuc_2(a, b, c));
	system("pause");
}