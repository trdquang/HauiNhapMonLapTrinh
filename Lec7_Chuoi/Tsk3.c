#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void nhap_mang(int *a, int *n){
	printf("Nhap mang\n");
	int i;
	for(i = 0; i < *n; i++){
		printf("a[%d] = ", i);
		scanf("%d", (a + i));
	}
}

void xuat_mang(int *a, int *n){
	printf("Gia tri mang luu tru\n");
	int i;
	for(i = 0; i < *n; i++){
		printf("%d ", *(a + i));
	}
	printf("\n");
}

int main(){
	int n;
	printf("n = ");
	scanf("%d", &n);
	int *a = (int *)malloc(n * sizeof(int));
	nhap_mang(a, &n);
	xuat_mang(a, &n);
}