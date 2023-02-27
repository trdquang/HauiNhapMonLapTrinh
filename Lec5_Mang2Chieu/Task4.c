#include <stdio.h>
#include <math.h>
#define MAX 100

void nhap_sl(int *n, char c){
	do{
		printf("%c = ", c);
		scanf("%d", n);
	}while(*n < 1);
}

void nhap_mt(int a[MAX][MAX], int m, int n){
	printf("Nhap phan tu cho ma tran\n");
	int i, j;
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
}

void xuat_mt(int a[MAX][MAX], int m, int n){
	printf("Gia tri ma tran duoc luu tru\n");
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

int tim_ln(int a[], int n){
	int m = a[0], i;
	for(i = 1; i < n; i++)
		if(a[i] > m)
			m = a[i];
	return m;
}

void tim_gt_hang_ln(int a[MAX][MAX], int m, int n){
	int i, j;
	for(i = 0; i < m; i++){
		printf("Max[%d] = %d\n", i, tim_ln(a[i], n));
	}
}

int main(){
	int m, n;
	int a[MAX][MAX];
	nhap_sl(&m, 'm');
	nhap_sl(&n, 'n');
	nhap_mt(a, m, n);
	xuat_mt(a, m, n);
	tim_gt_hang_ln(a, m, n);
}