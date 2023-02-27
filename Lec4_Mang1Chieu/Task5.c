#include <stdio.h>
#include <math.h>
#define MAX 1000
void nhap_sl(int *n, char c){
	do{
		printf("%c = ", c);
		scanf("%d", n);
		if(*n <=2 || *n >=30)
			printf("Nhap gia tri khong hop le\n");
	}while(*n <=2 || *n >=30);
}
void nhap_mang(int a[], int n){
	printf("Nhap %d gia tri cho mang, moi gia tri cach nhau"
			"boi dau cach\n", n);
	int i;
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void xuat_mang(int a[], int n){
	printf("Cac gia tri mang luu tru\n");
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

void tim_ln(int a[], int n){
	int max = abs(a[0]), index = 0;
	int i;
	for(i = 1; i < n; i++){
		if(abs(i) > max){
			max = abs(i);
			index = i;
		}
	}
	printf("Phan tu co gia tri tuyet doi lon nhat = %d\n", a[index]);
}

void tim_le(int a[], int n){
	int i, index = -1;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			index = i;
			break;
		}
	}
	if(index == -1)
		printf("-1");
	else{
		printf("Phan tu le dau tien = %d\n", a[index]);
	}
}

int main(){
	int n, a[MAX];
	nhap_sl(&n, 'n');
	nhap_mang(a, n);
	xuat_mang(a, n);
	tim_ln(a, n);
	tim_le(a, n);
}