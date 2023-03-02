#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void nhap_sl(int *n){
	do{
		printf("n = ");
		scanf("%d", n);
		if(*n <= 0 || *n >= 30)
			printf("Gia tri nhap khong hop le. Nhap lai\n");
	}while(*n <= 0 || *n >= 30);
}

void nhap_mang(int *a, int n){
	printf("Nhap gia tri cho mang\n");
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d",(a + i));
	}
	printf("\n\n");
}

void xuat_mang(int *a, int n){
	printf("Cac gia tri mang luu tru\n");
	int i;
	for(i = 0; i < n; i++){
		printf("%d ", *(a + i));
	}
	printf("\n\n");
}

void tim_max2(int *a, int n){
	int max1 = *a, min1 = *a;
	int i;
	for(i = 1; i < n; i++){
		if(*(a + i) > max1)
			max1 = *(a + i);
		if(*(a + i) < min1)
			min1 = *(a + i);
	}
	
	if(max1 == min1)
		printf("Mang khong co gia tri lon thu hai");
	else{
		for(i = 1; i < n; i++)
			if(*(a + i) > min1 && *(a + i) < max1)
				min1 = *(a + i);
		printf("Gia tri lon thu hai trong mang: %d", min1);
	}
	printf("\n\n");
}

void chen_pt(int *a, int *n, int index, int value){
	int i;
	a = realloc(a, *n * sizeof(int));
	for(i = *n; i > index; i--)
		*(a + i) = *(a + i - 1);
	
	(*n)++;
	*(a + index) = value;
	
}

void chen_pt_k(int *a, int *n, int k){
	int i;
	int check = 0;
	for(i = 0; i < *n; i++){
		if(*(a + i) % 2 != 0){
			check = 1;
			chen_pt(a, n, i + 1, k);
			break;
		}
	}
	if(check == 0)
		printf("Chen  that bai");
	else
		printf("Chen thanh cong");
	printf("\n\n");
}

int main(){
	int n, k;
	printf("Nhap kich thuoc mang\n");
	nhap_sl(&n);
	int *a = malloc(n * sizeof(int));
	
	nhap_mang(a, n);
	xuat_mang(a, n);
	
	tim_max2(a, n);
	
	printf("Nhap phan tu k can chen: ");
	scanf("%d", &k);
	chen_pt_k(a, &n, k);
	xuat_mang(a, n);
}