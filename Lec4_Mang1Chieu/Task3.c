#include <stdio.h>
#include <math.h>
void nhap_nguyen(int *n, char c){
	printf("Nhap so nguyen %c = ", c);
	scanf("%d", n);
}

void nhap_thuc(float *n, char c){
	printf("Nhap so thuc %c = ", c);
	scanf("%f", n);
}

int tinh_gt(int n){
	if(n == 0)
		return 1;
	return n * tinh_gt(n - 1);
}
float tinh_bt(int n, float x){
	if(n == 1)
		return 10 + (float)pow(x, 2 * n)/tinh_gt(2 * n);
	return (float)pow(x, 2 * n)/tinh_gt(2 * n) + tinh_bt(n - 1, x);
}
int main(){
	int n;
	float x;
	nhap_nguyen(&n, 'n');
	nhap_thuc(&x, 'x');
	printf("F(%d, %.2f) = %.2f\n", n, x, tinh_bt(n, x));
}