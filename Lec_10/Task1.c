#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void nhap(int *n){
	do{
		scanf("%d", n);
	}while(*n <= 0);
}

int tinh_bt1(int n){
	int res = 0;
	int i;
	for(i = 1; i <= n; i++)
		res += pow(-1, (i + 1)) * i;
	return res;
}

int tinh_bt2(int n){
	int res = 0;
	int i;
	for(i = 1; i <= n; i++)
		res += pow(i, 2);
	return res;
}

int main(){
	int m, n;
	printf("m = ");
	nhap(&m);
	printf("n = ");
	nhap(&n);
	printf("S(%d) + P(%d) = %d", n, n + m, tinh_bt1(n) + tinh_bt2(n + m));
}