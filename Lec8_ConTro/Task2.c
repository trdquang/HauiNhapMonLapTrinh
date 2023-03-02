#include <stdio.h>
#include <stdlib.h>

void nhap_sl(int *n){
	do{
		scanf("%d", n);
		if(*n < 1 || *n > 30)
			printf("Gia tri nhap khong hop le. Nhap lai: ");
	}while(*n < 1 || *n > 30);
}

void nhap_mang(int *a, int n){
	printf("Nhap mang\n");
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
	printf("\n\n");
}

void tinh_tong(int *a, int n){
	int check = 0;
	int sum = 0;
	int i;
	for(i = 0; i < n; i++){
		if(*(a + i) > 0 && *(a + i)%3 == 0){
			check = 1;
			sum += *(a + i);
		}
	}
	if(check == 0)
		printf("Mang khong co phan tu duong chia het cho 3");
	else
		printf("Tong cac phan tu duong chia het cho 3 = %d\n", sum);
	printf("\n\n");
}

void chen(int *a, int *n, int index, int value){
	a = (int*)realloc(a, (*n + 1) * sizeof(int));
	int i;
	for(i = *n; i > index; i--){
		*(a + i) = *(a + i -1);
	}
	*(a + index) = value;
	(*n)++;
}

void chen_am(int *a, int *n, int value){
	printf("Chen %d vao sau phan tu am\n");
	int i;
	for(i = 0; i < *n; i++){
		if(*(a + i) < 0){
			chen(a, n, i + 1, value);
			i ++;
		}
	}
}

int main(){
	int n, x;
	printf("Nhap so luong phan tu mang\n");
	nhap_sl(&n);
	int *a = (int*)malloc(n * sizeof(int));
	nhap_mang(a, n);
	xuat_mang(a, n);
	
	tinh_tong(a, n);
	
	printf("Nhap x muon chen = ");
	scanf("%d", &x);
	chen_am(a, &n, x);
	xuat_mang(a, n);
}