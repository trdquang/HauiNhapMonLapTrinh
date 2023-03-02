#include <stdio.h>
#include <stdlib.h>

int nhap_sl(int *n){
	do{
		printf("n = ");
		scanf("%d", n);
	}while(*n <= 5 || *n >= 20);
}

void nhap_mang(float *a, int n){
	printf("Nhap gia tri cho mang\n");
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}
}

void xuat_mang(float *a, int n){
	printf("Gia tri luu tru trong mang\n");
	int i;
	for(i = 0; i < n; i++)
		printf("%.2f ", a[i]);
	printf("\n\n");
}

void tinh_tong (float *a, int n){
	float sum = 0;
	int i;
	for(i = 0; i < n; i++)
		if(*(a + i) >= 3 && *(a + i) <= 8)
			sum += *(a + i);
	if(sum == 0)
		printf("Khong co phan tu nao thoa man");
	else 
		printf("Tong cac phan tu trong mang thuoc [3, 8] = %.2f", sum);
	printf("\n\n");
}

void chen(float *a, int *n, float value){
	printf("Chen %.2f vao sau phan tu dau tien\n", value);
	a = (float*)realloc(a, *n * sizeof(float));
	int i;
	for(i = *n; i > 1; i--){
		*(a + i) = *(a + i -1);
	}
	(*n)++;
	
	*(a + 1) = value;
}

int main(){
	int n;
	float k;
	printf("Nhap kich thuoc mang\n");
	nhap_sl(&n);
	float *a = (float*)malloc(n * sizeof(float));
	
	nhap_mang(a, n);
	xuat_mang(a, n);
	
	tinh_tong(a, n);
	
	printf("Nhap so k can chen: ");
	scanf("%f", &k);
	chen(a, &n, k);
	xuat_mang(a, n);
}