#include <stdio.h>
#include <stdlib.h>

void nhap_sl(int *n){
	do{
		scanf("%d", n);
		if(*n < 0)
			printf("Gia tri nhap khong hop le. Nhap lai: ");
	}while(*n < 0);
}

void nhap_mang(float *a, int n){
	printf("Nhap mang\n");
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%f", (a + i));
	}
	printf("\n\n");
}

void xuat_mang(float *a, int n){
	printf("Xuat mang\n");
	int i;
	for(i = 0; i < n; i++){
		printf("%.2f ", *(a + i));
	}
	printf("\n\n");
}

void ktra_hop_le(float *a, int n){
	int check = 1;
	int i;
	for(i = 0; i < n; i++)
		if(*(a + i) <= 6){
			check = 0;
			break;
		}
	if(check == 1)
		printf("Mang hop le");
	else
		printf("Mang khong hop le");
	printf("\n\n");
}

void xoa_pt(float *a, int *n, int index){
	int i;
	for(i = index; i < *n - 1; i++)
		*(a + i) = *(a + i + 1);
	(*n)--;
	a = (float*) realloc(a, (*n) * sizeof(float));
}

void xoa_het(float *a, int *n, float x){
	printf("Mang sau khi da xoa %.2f\n", x);
	int i;
	for(i = 0; i < *n; i++){
		if(*(a + i) == x){
			xoa_pt(a, n, i);
			i--;
		}
	}
}

int main(){
	int n;
	float x;
	printf("Nhap so luong phan tu mang: ");
	nhap_sl(&n);
	float *a = (float*)malloc(n * sizeof(float));
	nhap_mang(a, n);
	xuat_mang(a, n);
	
	ktra_hop_le(a, n);
	
	printf("Nhap x can xoa = ");
	scanf("%f", &x);
	xoa_het(a, &n, x);
	xuat_mang(a, n);
}