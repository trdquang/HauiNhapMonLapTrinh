#include <stdio.h>
#include <stdlib.h>

void nhap_sl(int *n){
	do{
		scanf("%d", n);
	}while(*n <=0 || *n >= 30);
}

void nhap_mang(int *a, int n){
	printf("\nNhap mang\n");
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", (a + i));
	}
	printf("\n\n");
}

void xuat_mang(int *a, int n){
	printf("Xuat mang\n");
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", *(a + i));
	if(n == 0)
		printf("Mang rong");
	printf("\n\n");
}

void sap_xep(int *a, int n){
	printf("Sap xep mang tang dan\n");
	int i, j;
	for(i = 0; i < n - 1; i ++)
		for(j = i + 1; j < n; j++)
			if(*(a + i) > *(a + j)){
				int tmp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = tmp;
			}
}

void tim_nn(int *a, int n){
	int i;
	int check = 0;
	for(i = 0; i < n; i++){
		if(*(a + i) > 0){
			check = 1;
			printf("So duong nho nhat = %d\n", *(a + i));
			break;
		}
	}
	if(check == 0)
		printf("Mang khong ton tai so duong");
}

int main(){
	int n;
	printf("Nhap kich thuoc mang,n = ");
	nhap_sl(&n);
	int *a = malloc(n * sizeof(int));
	nhap_mang(a, n);
	xuat_mang(a, n);
	
	sap_xep(a, n);
	xuat_mang(a, n);
	
	tim_nn(a, n);
}