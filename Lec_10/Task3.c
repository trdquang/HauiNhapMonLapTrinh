#include <stdio.h>
#include <math.h>

void nhap(int *n, float *x){
	do{
		printf("n = ");
		scanf("%d", n);
	}while(*n <= 0);
	printf("x = ");
	scanf("%f", x);
}

int tinh_gt(int n){
	int res = 1;
	int i;
	for(i = 1; i <= n; i++)
		res *= i;
	return res;
}

float tinh_bt(float x, int n){
	float res = 0;
	int i;
	for(i = 1; i <= n; i++)
		res += (float)pow(x, i)/tinh_gt(i);
	return res;
}

int main(){
	int n;
	float x;
	nhap(&n, &x);
	printf("\nn = %d\nx = %.2f\n\n", n, x);
	
	printf("S(%.2f, %d) = %.2f", x, n, tinh_bt(x, n));
}