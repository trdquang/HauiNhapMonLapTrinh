#include <stdio.h>
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

void xu_ly_mang(int a[], int n){
	int cnt = 0, sum = 0;
	printf("\nCac gia tri am co trong mang\n");
	int i;
	for(i = 0; i < n; i++){
		if(a[i] < 0){
			printf("%d ", a[i]);
			cnt ++;
			sum += a[i];
		}
	}
	printf("\nCo %d so am trong mang\n", cnt);
	if(cnt)
		printf("Tong cac phan tu am trong mang = %d\n", sum);
}

int main(){
	int n, a[MAX];
	nhap_sl(&n, 'n');
	nhap_mang(a, n);
	xuat_mang(a, n);
	xu_ly_mang(a, n);
}