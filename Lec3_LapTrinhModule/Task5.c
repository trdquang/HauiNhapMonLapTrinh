#include <stdio.h>

void nhap_nguyen(int*n, char c){
	do{
		printf("Nhap %c (>3) = ", c);
		scanf("%d", n);
		if(*n <= 3)
			printf("Gia tri nhap khong hop le\n");
	}while(*n <= 3);
}

int giai_thua(int n){
	if(n <= 0)
		return 1;
	int res = 1;
	for(int i = 1; i <= n; i++)
		res *= i;
	return res;
}

int tinh_bt(int n){
	if(n <= 0)
		return 0;
	int res = 0;
	for(int i = 1; i <= n; i++)
		res += giai_thua(i);
	return res;
}

int main(){
	int n, m;
	nhap_nguyen(&n, 'n');
	nhap_nguyen(&m, 'm');
	printf("S(2n) + s(m) = %d\n", tinh_bt(2 * n) + tinh_bt(m));
}