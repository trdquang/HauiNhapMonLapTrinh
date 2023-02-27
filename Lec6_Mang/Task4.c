#include <stdio.h>
#define MAX 100

void nhap(int *n, char c){
	do{
		printf("%c = ", c);
		scanf("%d", n);
	}while(*n <1 || *n > MAX);
}

void xuat(float x){
	int x1 = x;
	if(x == x1)
		printf("%4d", x1);
	else
		printf("%.2f", x);
}

void nhap_mt(float a[MAX][MAX], int m, int n){
	printf("Nhap gia tri cho ma tran\n");
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%f", &a[i][j]);
		}
	}
}

void xuat_mt(float a[MAX][MAX], int m, int n){
	printf("Gia tri ma tran luu tru\n");
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			xuat(a[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}

void tinh_tong(float a[MAX][MAX], int m, int n){
	if(m != n)
		printf("Khong phai ma tran vuong\n");
	else{
		float sum = 0;
		int i, j;
		for(i = 0; i < m; i++)
			sum += a[i][i];
		printf("Tong cac phan tu tren duong cheo chinh = ");
		xuat(sum);
		printf("\n");
	}
}

float tim_max(float a[], int n){
	float max = a[0];
	int i;
	for(i = 1; i < n; i++)
		if(a[i] > max)
			max = a[i];
	return max;
}

void tim_max_cot(float a[MAX][MAX], int m, int n){
	int i, j;
	for(i = 0; i < m; i++){
		printf("Max[%d] = %d\n", i, a[i][])
	}
}
int main(){
	int n, m;
	float a[MAX][MAX];
	nhap(&m, 'm');
	nhap(&n, 'n');
	nhap_mt(a, m, n);
	xuat_mt(a, m, n);
	tinh_tong(a, m, n);
}