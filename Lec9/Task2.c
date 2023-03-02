#include <stdio.h>
#include <stdlib.h>

void nhap_sl(int *n){
	do{
		printf("n = ");
		scanf("%d", n);
		if(*n <= 5 || *n >=30)
			printf("Gia tri khong hop le. Nhap lai\n");
	}while(*n <= 5 || *n >= 30);
}

void nhap_mang(float *a, int n){
	printf("Nhap gia tri cho mang\n");
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%f", (a + i));
	}
	printf("\n\n");
}

void xuat_mang(float *a, int n){
	printf("Gia tri luu trong mang\n");
	int i;
	for(i = 0; i < n; i++)
		printf("%.2f ", *(a + i));
	printf("\n\n");
}

void sap_giam(float *a, int n){
	printf("Sap xep mang giam\n");
	int i, j;
	for(i = 0; i < n - 1; i++)
		for(j = i + 1; j < n; j++)
			if(*(a + i) < *(a + j)){
				float tmp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = tmp;
			}
}

void ktra_hop_le(float *a, int n){
	int check = 1;
	int i;
	for(i = 0; i < n - 1; i++){
		if(*(a + i) <= 0 || *(a + i) + *(a + i + 1) <= 5){
			check = 0;
			break;
		}
	}
	if(*(a + n - 1) <= 0)
		check = 0;
	if(check == 0)
		printf("Mang khong hop le");
	else
		printf("Mang hop le");
	printf("\n\n");
}

int main(){
	int n;
	printf("Nhap kich thuoc cho mang\n");
	nhap_sl(&n);
	
	float *a = malloc(n * sizeof(float));
	nhap_mang(a, n);
	xuat_mang(a, n);
	
	sap_giam(a, n);
	xuat_mang(a, n);
	
	ktra_hop_le(a, n);
}