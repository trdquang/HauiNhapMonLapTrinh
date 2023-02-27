#include <stdio.h>
#define MAX 200

void nhap_sl(int *n, char c){
	do{
		printf("%c = ", c);
		scanf("%d", n);
	}while(*n <= 5 || *n >= 20);
}

void nhap_mang(int a[MAX], int n){
	printf("Nhap %d gia tri cua mang, moi gia tri cach nhau boi dau cach\n");
	int i;
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void xuat_mang(int a[MAX], int n){
	printf("Cac gia tri mang duoc luu tru\n");
	int i;
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int tim_kiem(int a[MAX], int n){
	int i;
	for(i = 0; i < n; i++)
		if(a[i] > 0)
			return i;
	return -1;	
}

int ktra(int a[MAX], int n){
	int i;
	for(i = 0; i < n - 2; i++){
		if(a[i] >= 0)
			return 0;
		if(a[i] + a[i + 1] + a[i + 2] == -100)
			return 0;
	}
	if(a[n - 2] >= 0 || a[n -1] >= 0)
		return 0;
	return 1;
}


int main(){
	int n, a[MAX];
	nhap_sl(&n, 'n');
	nhap_mang(a, n);
	xuat_mang(a, n);

	printf("Vi tri phan tu duong dau tien trong mang la %d\n",
		 tim_kiem(a, n));
	if(ktra(a, n))
		printf("Mang hop le\n");
	else
		printf("Mang khong hop le\n");
}